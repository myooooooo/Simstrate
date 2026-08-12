# Analyse / "décompilation" de Simstrat (FR).EXE

`Simstrat (FR).EXE` est un exécutable **NE 16 bits pour Windows 3.x**, écrit en
**Delphi 1.0** (VCL + Borland Database Engine). Une décompilation en C/Pascal
source n'est pas possible automatiquement pour ce format, mais les formulaires
(fenêtres) Delphi sont stockés en clair (format binaire `DFM`) dans les
ressources `RT_RCDATA` de l'EXE, ce qui permet de reconstruire toute la
structure de l'interface.

## Contenu

- **`FONCTIONNEMENT.md`** — comment le logiciel marche : modèle de données,
  paramétrage, décisions, moteur d'arbitrage, états financiers. **Commencer
  par là.**
- **`manuel_aide.txt`** — le manuel complet extrait de `Simstrat.HLP` :
  505 rubriques, 167 Ko de texte. C'est la documentation officielle du
  logiciel, y compris les rubriques qui décrivent le modèle de demande.
- `images/` — 47 images extraites : 43 icônes de l'interface (EXE) et
  4 captures d'écran intégrées au fichier d'aide.
- `schema_tables.txt` — schéma complet des 11 tables Paradox d'un jeu.
- `segments_map.txt` — carte des 45 segments de l'exécutable.
- **`decompilation_ghidra/`** — **décompilation en C** des 4272 fonctions de
  l'exécutable, produite par Ghidra 11.2.1 (chargeur NE, x86 16 bits), un
  fichier par segment, plus `inventaire_fonctions.txt`. Les appels aux API
  Windows 16 bits (549 symboles) sont résolus par nom.
- `decompilation_ghidra/recherche_partmarche.txt` et `fonctions_partmarche.c` —
  les 9 fonctions qui manipulent les champs du modèle de marché
  (`PartMarche`, `Effet*`, `VolumeMarche`, `Poids*`), isolées et décompilées.
- `formulaires_decompiles/*.dfm.txt` — les 34 formulaires de l'application,
  décodés (menus, libellés, champs, boutons...).
- `exe_strings.txt` / `dll_strings.txt` — chaînes de caractères brutes
  extraites de l'EXE et de la DLL.
- `scripts/ne_parse.py` — parseur d'en-tête NE + table de ressources.
- `scripts/dfm_decode.py` — décodeur du format binaire DFM (Delphi 1-7).
- `scripts/px_schema.py` — schéma d'une table Paradox.
- `scripts/px_data.py` — lecture des enregistrements Paradox.
- `scripts/hlp_parse.py` — répertoire interne d'un fichier WinHelp 3.x.
- `scripts/hlp_topics.py` — extraction des rubriques et du texte d'aide.
- `scripts/hlp_bitmaps.py` — extraction des images du fichier d'aide.
- `scripts/ne_segments.py` — extraction des segments de code de l'EXE.
- `scripts/ne_bitmaps.py` — extraction des bitmaps/icônes de l'EXE.

## Résumé fonctionnel

Simstrat(e) 1.21 (Éditions Labodidact, 1997-2004) est un jeu de simulation
de gestion d'entreprise à visée pédagogique : plusieurs équipes
("Entreprise 1" à "8") prennent des décisions par période (production,
prix, RH, finance...), un "Animateur" arbitre chaque période, et le logiciel
calcule les résultats (Bilan, Compte de Résultat, Trésorerie, Tableau de
Financement, S.I.G., Études de marché) et propose graphiques et impressions.

Le détail du moteur — formule du volume de marché, composantes de
l'attractivité, identités comptables vérifiées sur les données d'exemple —
est dans `FONCTIONNEMENT.md`.

## Réutilisation

```
python3 scripts/ne_parse.py "Simstrat (FR)/Simstrat (FR).EXE"
python3 scripts/dfm_decode.py chemin/vers/un_form_extrait.bin
```

`dfm_decode.py` attend un blob de ressource RT_RCDATA brut (commençant par
la signature `TPF0`) ; utiliser `ne_parse.py` pour repérer offset/taille de
chaque ressource dans l'EXE.


## Sur la décompilation : ce qu'elle est et ce qu'elle n'est pas

`decompilation_ghidra/` contient du **C reconstruit**, pas du Pascal d'origine :
les noms de variables et de fonctions internes sont générés (`FUN_1030_3fc2`,
`local_26`), et les structures Delphi n'apparaissent pas comme telles.

Ce qui fonctionne bien : le flot de contrôle, les appels aux API Windows
(nommés), les accès mémoire, et les 549 symboles importés.

Ce qui résiste : **l'arithmétique en virgule flottante**. Le binaire utilise
l'émulateur `WIN87EM` — les opérations flottantes sont des appels logiciels que
Ghidra ne modélise pas. Dans les fonctions de calcul, les registres de la pile
x87 apparaissent donc comme des entrées opaques (`in_ST0` … `in_ST7`) et les
formules ne sont pas directement lisibles. C'est la raison pour laquelle la
formule exacte `EffetGlobal → PartMarche` reste non établie, alors même que les
fonctions concernées ont été localisées (voir `recherche_partmarche.txt`).

Une version antérieure de ce dossier contenait un désassemblage produit par
`objdump`. Il a été retiré : balayage linéaire sans relocations, il
désynchronisait code et données sur de larges portions. La sortie Ghidra le
remplace avantageusement.

## Reproduire la décompilation

```sh
analyzeHeadless <projet> Simstrat -import "Simstrat (FR)/Simstrat (FR).EXE"
analyzeHeadless <projet> Simstrat -process "Simstrat (FR).EXE" -noanalysis \
    -scriptPath scripts/ghidra -postScript ExportAll.java <dossier_sortie>
```

Scripts Ghidra fournis dans `scripts/ghidra/` : `ExportAll.java` (export C
complet), `ScanFields.java` (recherche des fonctions touchant un champ Paradox
donné), `Recon.java` (inventaire), `FindArbitrage.java`.
