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
- `disassemblage_16bits.tar.gz` — désassemblage x86 16 bits complet des
  45 segments de l'EXE et des 3 de la DLL (380 000 lignes). Voir la mise en
  garde ci-dessous.
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


## Sur le désassemblage : ce qu'il est et ce qu'il n'est pas

`disassemblage_16bits.tar.gz` contient l'assembleur x86 16 bits des 969 Ko de
code de l'EXE. Il faut être clair sur ses limites :

- **Ce n'est pas du Pascal.** Aucun décompilateur ne produit du source Delphi
  à partir de code 16 bits. Le décompilateur d'IDA (Hex-Rays) ne gère pas le
  x86 16 bits ; celui de Ghidra le tente, avec un résultat approximatif.
- **C'est un balayage linéaire, sans relocations.** `objdump` désassemble les
  octets de bout en bout, sans distinguer code et données et sans appliquer la
  table de relocation NE. Des portions sont donc désynchronisées et illisibles.
  Un outil à analyse récursive (IDA, Ghidra) ferait nettement mieux.
- **L'essentiel n'est pas du code Simstrat** : une large part est la
  bibliothèque d'exécution Borland (VCL, BDE, RTL) liée statiquement.

Autrement dit : c'est livré par souci de complétude, mais la valeur analytique
réelle se trouve dans `FONCTIONNEMENT.md`, `manuel_aide.txt` et
`formulaires_decompiles/`.
