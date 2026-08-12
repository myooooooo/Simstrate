# Comment fonctionne Simstrat(e)

Document reconstitué par rétro-ingénierie de `Simstrat (FR).EXE` (aucune source
disponible) : lecture des ressources de formulaires Delphi, du schéma des tables
Paradox et des données des 6 jeux d'exemple fournis.

---

## 1. Nature du logiciel

Simstrat(e) 1.21 (Éditions Labodidact, 1997-2004) est un **jeu de simulation de
gestion d'entreprise** à usage pédagogique. Plusieurs équipes — de 1 à 8
« entreprises » — se concurrencent sur un même marché. Le jeu se déroule **par
périodes** (exercices). À chaque période :

1. chaque équipe saisit ses **décisions** (prix, production, publicité,
   embauches, investissements, financement…) ;
2. l'**animateur** saisit les paramètres d'environnement de la période (taux
   d'intérêt, taux de TVA/IS, coûts unitaires, aléas…) ;
3. l'animateur lance l'**arbitrage**, qui calcule le marché et produit les
   états financiers de chaque entreprise ;
4. les équipes consultent leurs **résultats** (bilan, compte de résultat,
   trésorerie, SIG, études de marché) et enchaînent sur la période suivante.

C'est donc un moteur de calcul économique + comptable piloté par une base de
données, pas un jeu temps réel.

Techniquement : exécutable **NE 16 bits** pour Windows 3.x, écrit en
**Delphi 1.0** (VCL), données en **tables Paradox** accédées via le Borland
Database Engine (BDE).

---

## 2. Organisation des fichiers d'un jeu

Un jeu porte un nom court (ex. `FETES`, `SUPES`, `CIME`, `ORDI`, `TELC`) et se
matérialise par 11 tables Paradox, chacune avec son index `.PX`. Le nommage
suit `<jeu> + S + <acteur> + <nature> + <portée>` :

| Fichier | Acteur | Nature | Portée | Contenu |
|---|---|---|---|---|
| `<jeu>SIMS` | — | — | — | Fichier maître du jeu (version, niveau, période en cours) |
| `<jeu>SACG` | Animateur | Création | Générales | Paramètres de création du jeu |
| `<jeu>SACP` | Animateur | Création | Produits | Définition des produits |
| `<jeu>SADG` | Animateur | Décisions | Générales | Environnement économique par période |
| `<jeu>SADP` | Animateur | Décisions | Produits | Paramètres de marché par période/produit |
| `<jeu>SEDG` | Entreprises | Décisions | Générales | Décisions financières/RH par entreprise |
| `<jeu>SEDP` | Entreprises | Décisions | Produits | Décisions produit (prix, prod., pub…) |
| `<jeu>SEDM` | Entreprises | Décisions | études Marché | Études de marché commandées |
| `<jeu>SERG` | Entreprises | Résultats | Généraux | Bilan / compte de résultat |
| `<jeu>SERP` | Entreprises | Résultats | Produits | Résultats commerciaux par produit |
| `<jeu>SMRP` | Marché | Résultats | Produits | Volume du marché par période/produit |

Les clés primaires structurent tout le modèle : `PeriodeNo`, puis
`EntrepriseNo` et/ou `ProduitNo` selon la table. Le schéma est **identique
d'un jeu à l'autre** (vérifié entre `FETES` et `ORDI`) : seules les valeurs
changent — un « jeu » est un jeu de paramètres, pas un scénario codé en dur.

Le schéma détaillé des 11 tables est dans `schema_tables.txt`.

---

## 3. Le paramétrage (ce que règle l'animateur)

### Création du jeu — `SACG`
`NombreEntreprises`, `CapitalSocialInitial`, `MachinesInitiales`,
`DureeAmortissement`, `ModeAmortissement` / `CoeffAmortDegressif`,
heures supplémentaires (`HSVolumePc`, `HSSurCoutPc`), et le barème de
l'**IFA** (Imposition Forfaitaire Annuelle) sur 10 seuils / 11 tarifs.

Les valeurs par défaut du barème IFA correspondent au **barème fiscal français
réel** de l'époque (seuils 1 M€ → 800 M€, tarifs 5 000 → 250 000). Le modèle
comptable vise donc le plan comptable français, pas une comptabilité fictive.

### Définition des produits — `SACP`
Par produit : `TempsFabrication` (heures/unité), `DemandePotEnt` (demande
potentielle *par entreprise*), `DemandeEvolution`, `DemandeParametre`,
`FacteurTempsFabPc` (effet d'apprentissage sur le temps de fabrication).

### Environnement économique par période — `SADG` (42 champs)
Taux financiers (`TauxEmprunt`, `TauxDecouvertAuto`/`NAuto`, `TauxEscompteAchat`,
`TauxPlacement`), fiscalité (`TauxTVA`, `TauxIS`), capacités
(`HeuresParMachine`, `HeuresParProductif`), coûts unitaires (machine, stock,
productif, vendeur, cadre, réparation), coûts sociaux (`CoutEmbauchePc`,
`CoutLicenciementPc`, `FormationMiniPc`), `CoutFixe`, assurance, encadrement
(`ProductifsParCadre`), `IndicePrix`.

S'y ajoutent les **aléas** pilotés par l'animateur : `GrevesPc`, `PannesPc` et
un système de catastrophe (`CataStyle`, `CataProbaPc`, `CataDestrMoyPc`, plus
un taux de destruction ciblé par entreprise `CataDestrEnt1Pc`…`CataDestrEnt8Pc`).
L'animateur peut donc frapper une entreprise précise.

### Paramètres de marché par période/produit — `SADP`
`PrixMinimum`, `PrixMaximum`, `IndiceConjoncturel`, `CoutMatiere`, un
éventuel appel d'offres (`AppelOffreQuantite`, `AppelOffrePrixMax`), et surtout
les **pondérations du modèle de demande** :
`PoidsPrix`, `PoidsPublicite`, `PoidsForceVente`, `PoidsCredit`,
`PoidsQualite`, `PoidsFidelisation`.

---

## 4. Les décisions des équipes

### Par produit — `SEDP`
`Prix`, `Production`, `MachinesAffectees`, `ProductifsAffectes`,
`VendeursAffectes`, `Publicite`, `ActionCommerciale`, `DepensesQualite`,
`DureeCreditClient`, `Liquidation` (soldes), `SoumissionQuantite`/`SoumissionPrix`
(réponse à l'appel d'offres).

L'allocation est le vrai levier : machines, productifs et vendeurs sont
**répartis entre les produits**, sous contrainte des effectifs et du parc
détenus par l'entreprise.

### Générales — `SEDG`
`VariationCapital`, `Dividendes`, `VariationEmprunt`, `Subventions`,
`ProduitsOuChargesEx`, `AchatMachines`/`VenteMachines`,
`EntretienMachinesPc`, `CadresEmbauches`/`CadresLicencies`,
`IndiceSalaires`, `CommissionFVPc`, `FormationPc`, `Etudes`.

### Études de marché — `SEDM`
7 études achetables (booléens) : produits des concurrents, parts de marché,
résultats, structure, situation du marché, auto-performance.

Chaque table de décision porte un drapeau `Validation` : l'animateur voit dans
l'écran ARBITRAGE quelles entreprises ont validé avant de lancer le calcul.

---

## 5. Le moteur d'arbitrage

### 5.1 Taille du marché — vérifié
Le volume du marché est **proportionnel au nombre d'entreprises**, ce qui
neutralise l'effet du nombre de joueurs :

```
VolumeMarche(t) = DemandePotEnt × NombreEntreprises × (1 − DemandeParametre% × t)
```

Vérifié sur les données de l'exemple 1 :
- produit 1 : `DemandePotEnt`=750, 3 entreprises, `DemandeParametre`=0
  → 2250 constant sur 6 périodes ✔
- produit 2 : `DemandePotEnt`=100, 3 entreprises, `DemandeParametre`=1
  → 297, 294, 291, 288, 285, 282 (−1 %/période) ✔

### 5.2 Attractivité et part de marché
Pour chaque entreprise × produit, `SERP` stocke les composantes calculées :
`EffetPrix`, `EffetPub`, `EffetFV`, `EffetCredit`, `EffetQualite`, puis
`EffetGlobal`, `PartMarche`, et enfin `Demande`.

Ce que les données démontrent :

- **`EffetPrix` ne dépend que du prix de l'entreprise** (pas des concurrents) :
  le même prix donne le même effet à toutes les périodes (14,0 → 0,09 en
  périodes 1, 3, 4 et 6). Il décroît de façon quasi linéaire entre
  `PrixMinimum` et `PrixMaximum`, à raison d'environ −0,018 par unité de prix
  dans l'exemple, plafonné par `PoidsPrix`.
- **`EffetPub` et `EffetFV` sont relatifs aux concurrents** : une même dépense
  publicitaire de 500 vaut 0,20 en période 1 mais 0,17 en période 3, parce que
  les concurrents ont augmenté leurs budgets. C'est une course à l'armement.
- **Il existe une variable d'état par entreprise** : en période 5, deux
  entreprises dépensent exactement 600 en publicité et obtiennent des effets
  différents (0,18 et 0,19). L'historique compte — cohérent avec le paramètre
  `PoidsFidelisation` (0,6 dans l'exemple), qui fait persister la part de
  marché acquise.
- `PartMarche` **n'est pas** la simple normalisation de `EffetGlobal`
  (en période 1 : effets 0,55 / 0,53 / 0,54 mais parts 35,56 / 31,11 / 33,33 %) —
  l'écart entre entreprises est amplifié par rapport aux effets bruts.

La **forme close exacte** de `EffetGlobal → PartMarche` n'est pas récupérable
depuis les seules données : elle est enfouie dans le code machine 16 bits de la
routine d'arbitrage. Ce qui est établi ci-dessus l'est par vérification sur les
données ; le reste n'est pas affirmé.

### 5.3 Ventes et stocks
`SERP` sépare `Demande`, `Ventes`, `DemandeNonSatisfaite` et `VentesPrises`
(demande captée par les concurrents en cas de rupture) : une entreprise qui
sous-produit **offre son excédent de demande à ses concurrents**. Le stock
invendu est valorisé (`QteStock`, `ValeurStock`) et coûte `CoutUniteStock` par
période. `ProductionReelle` peut différer de la production décidée (capacité,
pannes, grèves).

### 5.4 États financiers — vérifié
`SERG` (44 champs) contient un bilan et un compte de résultat complets :
capital, réserves, résultat net, situation nette, CAF, impôt, IFA, TVA
collectée/déductible, clients, fournisseurs, trésorerie, emprunts, découverts
autorisé/non autorisé, amortissements, cessions, immobilisations, effectifs et
leurs coûts, ainsi que deux indices de climat : `IndiceSatisPerson`
(satisfaction du personnel) et `IndiceSatisAction` (satisfaction des
actionnaires).

L'identité comptable est **exacte** sur toutes les périodes des données
d'exemple :

```
SituationNette(t) = CapitalSocial + Reserves(t) + ResultatNet(t)
Reserves(t)       = Reserves(t−1) + ResultatNet(t−1)
```

| Période | Capital | Réserves | Résultat net | Situation nette |
|---:|---:|---:|---:|---:|
| 1 | 5000 | 0 | −200 | 4800 |
| 2 | 5000 | −200 | 310 | 5110 |
| 3 | 5000 | 110 | 525 | 5635 |
| 4 | 5000 | 635 | 950 | 6585 |
| 5 | 5000 | 1585 | 1056,25 | 7641,25 |
| 6 | 5000 | 2641,25 | 947,5 | 8588,75 |

Le découvert non autorisé (`DecouvertNAuto`) se déclenche automatiquement quand
la trésorerie passe en négatif — en période 1 l'entreprise 1 finit à 0 de
trésorerie et 200 de découvert non autorisé, d'où sa perte.

---

## 6. Interface

34 formulaires Delphi, décodés dans `formulaires_decompiles/`. Structure du
menu principal (`TTheMainForm`) :

- **Fichier** : Nouveau jeu, Ouvrir, Fermer, Quitter
- **Animateur** : Prise de décisions (Animateur + Entreprise 1 à 8),
  Arbitrage, Résultats (par produits / généraux), Reprise de période,
  Rappels décisions
- **Public** : affichage collectif
- **Entreprises** : Prise de décisions, Résultats (Situation, Compte de
  résultat, Bilan, Tableau de financement, Tableau de trésorerie, S.I.G.,
  Études de marché), Rappels décisions
- **Impressions**, **Graphes**, **Options** (Infos jeu, Voir tables, polices)

Points notables :
- `TFORMSJDR_REPRISE` — **reprise de période** : l'animateur peut rejouer une
  période déjà arbitrée (d'où la conservation de toutes les périodes en base).
- `TFORMSEDD_AUTOCORR` — autocorrection des décisions incohérentes.
- `TLoginDialog` / `TPasswordDialog` — chaque équipe accède à ses seules
  données par mot de passe.
- `TFORMTABLES` — visualiseur de tables brut, pour l'animateur.
- Trois jeux d'écrans de décision distincts (`SADD`, `SEDD`, `SCDD`) selon le
  `Niveau` du jeu : le logiciel se décline en versions simplifiées ou
  complètes selon le public formé.

---

## 7. Outils fournis

| Script | Rôle |
|---|---|
| `scripts/ne_parse.py` | En-tête NE + table des ressources de l'EXE |
| `scripts/dfm_decode.py` | Décodage des formulaires Delphi binaires (DFM) |
| `scripts/px_schema.py` | Schéma d'une table Paradox (champs, types, clés) |
| `scripts/px_data.py` | Lecture des enregistrements Paradox |

```sh
python3 scripts/px_schema.py "Simstrat (FR)/Exemples/Exemple1/FETESERG.DB"
python3 scripts/px_data.py   "Simstrat (FR)/Exemples/Exemple1/FETESERG.DB"
```

Notes de format rencontrées (non documentées publiquement pour cette version) :
- descripteurs de champs à l'offset `0x78` (Paradox 5, octet de version `0x39`) ;
- les champs **BCD** occupent 17 octets : 1 octet d'en-tête (bit 7 = signe,
  quartet bas = nombre de décimales) + 32 quartets de chiffres ;
- les **valeurs négatives** stockent chaque quartet **complémenté à 0xF**
  (ex. `42 ff…fd ffff` → `00…02 0000` = 20000 → −200,00).
