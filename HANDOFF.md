# HANDOFF — reprendre le travail Simstrat en local

Ce document permet à une session **Claude Code locale** (sur la machine Windows
de l'utilisateur) de reprendre le projet exactement là où il en est, sans
rejouer toute l'histoire. Lis-le en entier avant d'agir.

Branche de travail : `claude/dossier-review-wzt2in`.

---

## 1. Où on en est (état au 12/08/2026)

Le projet est parti d'un dossier quasi vide et est devenu un **dossier complet
de rétro-ingénierie + préservation** de Simstrat(e) 1.21, un jeu de simulation
de gestion (Delphi 1, 16 bits, Windows 3.x, données Paradox via BDE), édité par
Labodidact (éditeur disparu → lost media).

**Ce qui est ACQUIS et documenté dans le dépôt :**

- Modèle de données complet (11 tables Paradox) + lecteur autonome `px_data.py`,
  validé au centime contre l'application réelle.
- Manuel intégral extrait du `.HLP` (505 rubriques) → `analyse_decompilation/manuel_aide.txt`.
- 34 formulaires Delphi décodés, 4425 fonctions décompilées et nommées (Ghidra).
- Formule du **volume de marché**, vérifiée exactement sur les 6 jeux d'exemple.
- Identités comptables vérifiées.
- Le logiciel **tourne** sous Wine (Linux) ET sous otvdm (Windows 11), BDE
  installé, captures dans `analyse_decompilation/captures_execution/`.
- Le **verrou démo** est compris ET débloqué (voir §3).

**LE FAIT MAJEUR le plus récent :** en lançant le binaire **patché** (démo
débloquée), l'utilisateur a réussi à **créer une partie**. Cela prouve que
**le moteur de simulation EST présent dans le binaire de démonstration** — il
était juste caché derrière le dispatch virtuel de Delphi, invisible à l'analyse
statique. La conclusion antérieure « moteur peut-être absent » est donc
**RÉFUTÉE**. (Confirmé aussi par une « division flottante par 0 » à l'arbitrage :
le moteur exécute bien du calcul flottant.)

> ⚠️ Les fichiers `FONCTIONNEMENT.md` (§9) et `DOSSIER_PRESERVATION.md` (§7)
> disent encore que la présence du moteur n'est pas tranchée. **À corriger :**
> le moteur est présent, prouvé à l'exécution.

---

## 2. L'objectif en cours

**Extraire la formule de part de marché : `EffetGlobal → PartMarche`.**

C'est le dernier morceau non résolu. Ce qui est déjà établi (par les données +
le manuel) :
- `EffetPrix` ne dépend que du prix propre (jamais des concurrents), linéaire
  en `u = (PrixMax − Prix)/(PrixMax − PrixMin)`.
- `EffetPub` et `EffetFV` sont relatifs aux concurrents.
- `PoidsFidelisation` reporte les parts acquises.
- Les 5 poids somment à 1.
- **Non résolu :** le passage exact `EffetGlobal → PartMarche` (la
  normalisation), et pourquoi la pente de l'effet-prix vaut 0,5–1,0 × PoidsPrix
  selon les produits. Bloqué par la précision 2 décimales des données d'exemple.

**La méthode pour le résoudre :** faire tourner des **arbitrages contrôlés**
(faire varier un seul levier, ex. le prix, tout le reste identique), puis lire
la table `SERP` de la partie avec `px_data.py`. Avec des entrées maîtrisées, on
isole la formule.

---

## 3. La recette runtime (Windows 11) — CE QUI MARCHE

Chemins réels sur la machine de l'utilisateur :
- Dépôt : `D:\sim\Simstrate` (branche `claude/dossier-review-wzt2in`)
- Logiciel : `D:\sim\Simstrat\` (copie de `Simstrat (FR)`)
- BDE installé : `D:\IDAPI\` (via l'installateur 16 bits, marche)
- otvdm : `D:\otvdm-v0.9.0\otvdm-v0.9.0\otvdm.exe`
- **Binaire patché : `D:\sim\Simstrat\Simstrat_FULL.EXE`**

Lancer la version débloquée :
```
"D:\otvdm-v0.9.0\otvdm-v0.9.0\otvdm.exe" "D:\sim\Simstrat\Simstrat_FULL.EXE"
```

**Le mécanisme du verrou démo** est documenté comme analyse dans
`FONCTIONNEMENT.md §8` : un drapeau `DAT_1160_0042` testé à 7 endroits
(`cmp byte[0x42],0 ; je`) commande 7 actions (dont l'arbitrage). Le binaire de
recherche `Simstrat_FULL.EXE` existe déjà **localement** sur la machine de
l'utilisateur (`D:\sim\Simstrat\`) — il n'est volontairement PAS versionné dans
ce dépôt (on documente l'analyse, on ne publie pas de binaire dérivé).

> Outil de **diagnostic/recherche** sur un logiciel orphelin, pour établir la
> présence du moteur. Ne pas redistribuer. Ne remplace pas une licence.

---

## 4. Le blocage actuel : « division flottante par 0 » à l'arbitrage

L'utilisateur crée une partie complète mais l'arbitrage plante sur une division
par zéro. Ce n'est PAS un bug du moteur — c'est un **paramètre à 0** dans la
partie créée, là où le moteur divise.

**Causes écartées :** amortissement (mis à 10), prix min/max (8/15, différents),
poids (0,5/0,25/0,25 = 1), prix machine (100 000, non nul), décisions
entreprises (saisies et validées).

**Piste la plus probable NON encore vérifiée :** les « valeurs prédéfinies » de
la partie créée sont aberrantes (machine 100 000, heures/machine 2000, coûts
fixes 1 000 000) → immobilisations = 10 × 100 000 = **1 000 000**. Le calcul
« tranches d'immobilisations » = `immobilisations ÷ TranchesImmob` divise par
zéro si `TranchesImmob = 0` (le sample s'en sortait car ses immobilisations
étaient minuscules). **À vérifier : onglet Animateur → Structure de coûts (2) →
champ « Tranches d'immobilisations ».**

**Le fix recommandé : recopier les paramètres du jeu d'exemple qui MARCHE.**
Le jeu `Exemple1` (FETES, Niveau 1) arbitre sans problème. Ses paramètres
(extraits par `px_data.py` de `FETESADG.DB`, `FETESADP.DB`, `FETESACG.DB`) :

| Paramètre | Valeur qui marche |
|---|---|
| Niveau | 1 |
| Nombre d'entreprises | 3 (ou 2) |
| Capital social initial | 5000 |
| Machines initiales | 10 |
| Amortissement durée | 10 (≠0, sinon /0 en linéaire) |
| Heures par machine | 10 |
| Heures par productif | 200 |
| Coût unité machine | 500 |
| Coût unité productif | 500 |
| Coût unité vendeur | 500 |
| Coût fixe | 1000 |
| Prix minimum (produit 1) | 5 |
| Prix maximum (produit 1) | 20 |
| Coût matière (produit 1) | 5 |
| Poids prix / pub / FV | 0,5 / 0,2 / 0,3 |
| Poids fidélisation | 0,6 |
| Demande potentielle / entreprise | 750 |
| Évolution demande | linéaire, taux 0 |
| Temps de fabrication | 0,1 |

Décisions entreprises (par entreprise, produit 1) qui marchent :
Production ~400, Machines affectées 10, Productifs 1, **Prix (à faire varier :
12, 13, 14…)**, Publicité 500, Vendeurs 2.

Une fois qu'un arbitrage passe : la partie s'écrit dans des tables Paradox
`<nom>S*.DB`. Les lire avec `px_data.py` (table `SERP` = résultats produits :
`EffetPrix`, `EffetPub`, `EffetFV`, `EffetGlobal`, `PartMarche`, `Demande`,
`Ventes`).

---

## 5. Outils disponibles (dans `analyse_decompilation/scripts/`)

| Script | Rôle |
|---|---|
| `px_schema.py` | schéma d'une table Paradox |
| `px_data.py` | **lecture des enregistrements** (BCD, dates, négatifs gérés) |
| `dfm_decode.py` | décodage des formulaires Delphi |
| `ne_parse.py`, `ne_segments.py`, `ne_bitmaps.py` | analyse du binaire NE |
| `hlp_parse.py`, `hlp_topics.py`, `hlp_bitmaps.py` | lecture du fichier d'aide |
| `delphi_rtti.py` | extraction des noms de méthodes Delphi |
| `scripts/ghidra/*.java` | scripts Ghidra (export C, recherche, VMT…) |

Usage type :
```
python analyse_decompilation/scripts/px_data.py "chemin/vers/<jeu>SERP.DB"
```

Décompilation Ghidra complète (nommée) dans
`analyse_decompilation/decompilation_ghidra/` (un `.c` par segment).

---

## 6. Prochaines étapes concrètes (pour la session locale)

1. **Débloquer l'arbitrage** : recréer une partie Niveau 1 avec les paramètres
   du §4 (ceux du sample), ou vérifier/corriger `TranchesImmob`. Objectif : un
   arbitrage qui se termine sans division par zéro.
2. **Expérience contrôlée** : 3 entreprises identiques SAUF le prix (ex. 12 / 13
   / 14). Arbitrer. Lire `SERP` avec `px_data.py`.
3. **Répéter** en faisant varier la publicité (prix identiques), puis la force
   de vente, pour isoler chaque effet.
4. **Ajuster** `EffetGlobal → PartMarche` sur ces données propres. Comparer à
   `EffetGlobal` normalisé, à la fidélisation, etc. (les données du sample
   suggèrent que PartMarche amplifie les écarts d'EffetGlobal — voir
   `FONCTIONNEMENT.md` §5.2).
5. **Documenter** la formule trouvée dans `FONCTIONNEMENT.md` §5.2, et
   **corriger** les §9/§7 (moteur PRÉSENT, prouvé à l'exécution).

Astuce : une session locale peut piloter otvdm et lire les `.DB` directement,
donc automatiser la boucle « écrire décisions → arbitrer → lire SERP » est
envisageable (voire écrire les tables d'entrée avec un writer Paradox plutôt
que via la GUI).

---

## 7. Rappels de contexte (préservation)

- L'utilisateur fait ça par passion du reverse + pour une prof (en congé
  maternité) qui utilise encore Simstrat en cours.
- Pistes de récupération d'une version complète légitime : **Canopé Caen**
  (ex-CRDP, disquettes + 2 manuels catalogués en 2002), l'ancien PC de la prof
  (`Simstra1.dll` licencié + `C:\IDAPI`), le site `labodidact.online.fr` (démo).
  Détails et courriel prêt dans `DOSSIER_PRESERVATION.md`.
- Ton à garder : la préservation, pas la redistribution. Le patch sert à
  comprendre, pas à contourner une licence commerciale (l'éditeur n'existe plus).
