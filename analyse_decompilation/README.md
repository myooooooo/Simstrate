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
- `schema_tables.txt` — schéma complet des 11 tables Paradox d'un jeu.
- `formulaires_decompiles/*.dfm.txt` — les 34 formulaires de l'application,
  décodés (menus, libellés, champs, boutons...).
- `exe_strings.txt` / `dll_strings.txt` — chaînes de caractères brutes
  extraites de l'EXE et de la DLL.
- `scripts/ne_parse.py` — parseur d'en-tête NE + table de ressources.
- `scripts/dfm_decode.py` — décodeur du format binaire DFM (Delphi 1-7).
- `scripts/px_schema.py` — schéma d'une table Paradox.
- `scripts/px_data.py` — lecture des enregistrements Paradox.

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
