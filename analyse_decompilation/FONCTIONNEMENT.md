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

### 5.1 Taille du marché — formule établie et vérifiée exactement

Le volume du marché est **proportionnel au nombre d'entreprises**, ce qui
neutralise l'effet du nombre de joueurs. La formule complète est :

```
VolumeMarche(t) = DemandePotEnt × NombreEntreprises
                  × Evolution(t)
                  × (1 + IndiceConjoncturel(t))
```

avec, selon `DemandeEvolution` (mode fixé par produit à la création) :

| mode | loi | Evolution(t) |
|---|---|---|
| 0 | linéaire | `1 + DemandeParametre/100 × t` |
| 2 | exponentielle | `(1 + DemandeParametre/100)^t` |
| 1 | croissante/décroissante | non observé (aucun exemple ne l'utilise) |

`DemandeParametre` porte son signe : négatif pour un marché qui se contracte.
`IndiceConjoncturel` est le coefficient conjoncturel/saisonnier de `SADP`,
réglable par l'animateur à chaque période (borné à ±0,5 selon le manuel).

**Vérification** : la formule reproduit *exactement* les 41 volumes des six
jeux d'exemple, sur toutes leurs périodes, y compris des valeurs à neuf
chiffres significatifs comme 1 368 569,05 (ORDIS, produit 1, t=8) ou
821 240,71 (CIMES, produit 1, t=5). Aucun écart.

Exemples :
- FETES produit 1 : mode 0, param 0 → 2250 constant ✔
- FETES produit 2 : mode 0, param −1 → 297, 294, 291, 288, 285, 282 ✔
- ORDIS produit 2 : mode 0, param +10, avec `IndiceConjoncturel` −0,10 puis
  −0,15 en périodes 4 et 5 → 79 200, 86 400, 93 600, 90 720, 91 800 ✔
- CIMES produit 1 : mode 2, param +4 → 1,04^t, soit 780 000, 811 200,
  843 648, 877 393,92 ✔

### 5.2 Attractivité et part de marché
Pour chaque entreprise × produit, `SERP` stocke les composantes calculées :
`EffetPrix`, `EffetPub`, `EffetFV`, `EffetCredit`, `EffetQualite`, puis
`EffetGlobal`, `PartMarche`, et enfin `Demande`.

Ce que les données démontrent :

- **`EffetPrix` ne dépend que du prix de l'entreprise, jamais des
  concurrents.** Vérifié sur les six jeux : parmi les 148 observations, il
  n'existe *aucun* cas où deux entreprises pratiquant le même prix avec les
  mêmes paramètres obtiennent un effet différent, quelles que soient les
  périodes et les prix pratiqués autour d'elles.
- Pour un produit donné, `EffetPrix` est **linéaire** en la position
  normalisée du prix `u = (PrixMax − Prix) / (PrixMax − PrixMin)` :
  l'ajustement par produit laisse un résidu maximal de 0,011, sur des plages
  de prix allant de 5–20 à 1400–2500.
- En revanche la pente n'est **pas** simplement `PoidsPrix` : elle vaut
  0,50 × `PoidsPrix` pour FETES et SUPES, 0,62 pour CIMES produit 2, 0,78 à
  0,82 pour ORDIS produit 2 et TELCS, 0,87 pour CIMES produit 1, 1,00 pour
  ORDIS produit 1. Aucun paramètre de `SACP` ou `SADP` examiné n'explique ce
  facteur, et la précision des données (`EffetPrix` n'est stocké qu'à deux
  décimales) empêche d'aller plus loin par cette voie.
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

La **forme close exacte** de `EffetGlobal → PartMarche` n'est pas établie. Ce
qui est affirmé ci-dessus l'est par vérification sur les données et par le
manuel ; le reste ne l'est pas.

### Ce que la décompilation a permis de localiser

Le point d'entrée de l'arbitrage a été retrouvé via les tables de méthodes
publiées de Delphi (voir `decompilation_ghidra/symboles_delphi.txt`) :

```
TFormSJDA_Arbitrage.BitBtnArbitrerClick   @ 1018:0e0b
```

Ce gestionnaire est un simple pilote : il passe le curseur en sablier
(`crHourGlass` = −11), appelle la routine d'arbitrage `1018:ab2b`, puis
restaure le curseur. La routine d'arbitrage enchaîne trois phases de
préparation (`10b8:3a8a`, `10b8:4436`, `10b8:47d0` — ouverture des tables,
sans calcul flottant), puis **boucle sur les entreprises** en appelant
`1018:7ddc` pour chacune.

Le segment `10b8` (fichier `Code24.c`) est l'unité de calcul du marché : c'est
lui qui lie les champs `EffetPrix`, `EffetPub`, `EffetFV`, `EffetCredit`,
`EffetQualite`, `EffetGlobal`, `PartMarche`, `DemandeNonSatisfaite`,
`VentesPrises` (`10b8:3f1c`), `VolumeMarche` (`10b8:46a0`) et les poids
(`10b8:1bc2`).

Constat notable : le programme n'utilise le x87 que dans **107 fonctions**, et
**aucune fonction applicative ne contient de division flottante** — les seules
`FDIV` sont dans le segment `1158`, la bibliothèque d'exécution Borland. La
normalisation des parts de marché passe donc par une routine de la RTL, ce qui
explique qu'elle n'apparaisse pas directement dans le code métier.

Le blocage restant n'est pas l'émulateur `WIN87EM` (le binaire utilise en fait
des instructions x87 natives : 1166 `FLD`, 1676 `FSTP`, 201 `FMUL`), mais la
**convention d'appel** : Delphi 1 passe et retourne les `Extended` sur la pile
du coprocesseur, ce que Ghidra ne modélise pas. Les valeurs entrantes
apparaissent donc comme `in_ST0` … `in_ST7`, et la chaîne de calcul se perd
d'une fonction à l'autre.

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

---

## 8. Ce que la version de démonstration bride (établi par décompilation)

Le binaire analysé ici est une **version de démonstration**. Le mécanisme est
désormais connu précisément : un **drapeau global** du segment de données
(`DAT_1160_0042`), positionné au démarrage par le contrôle de licence porté par
`Simstra1.dll`, commande sept gardes conditionnels. Chaque garde suit la même
forme :

```c
void TTheMainForm_ArbitrageA1Click(...)
{
    if (DAT_1160_0042 == '\0') {      /* version complète : action normale */
        FUN_1018_03d9();              /* ouverture du formulaire d'arbitrage */
        ...
    }
    else {                            /* version limitée */
        FUN_1010_352b();              /* « Non disponible en version limitée » */
    }
}
```

Les sept actions bloquées, retrouvées par recherche des appelants de
`FUN_1010_352b` (voir `decompilation_ghidra/version_limitee_refs.txt`) :

| Méthode | Fonction bridée |
|---|---|
| `TTheMainForm.Nouveau1Click` | Créer un nouveau jeu |
| `TTheMainForm.DecisionsAnimateurClick` | Décisions de l'animateur |
| `TTheMainForm.DAEnt1Click` | Décisions animateur par entreprise |
| `TTheMainForm.DecisionsE1Click` | Décisions des entreprises |
| `TTheMainForm.ArbitrageA1Click` | **Lancer l'arbitrage** |
| `TTheMainForm.RepriseA1Click` | Reprise de période |
| `TTheMainForm.VoirTTABLE1Click` | Visualiser les tables |

Conséquence : la démonstration ne permet **ni de créer un jeu, ni de saisir des
décisions, ni d'arbitrer**. Elle sert uniquement à consulter les résultats des
jeux d'exemple livrés, déjà calculés par une version complète. Ce n'est donc
pas seulement une question de mention légale : le logiciel de démonstration est
fonctionnellement incapable d'animer une formation.

Le code du moteur, lui, **reste présent** dans le binaire : le gestionnaire
`TFormSJDA_Arbitrage.BitBtnArbitrerClick` et la routine `1018:ab2b` existent,
avec leurs trois phases et leur boucle sur les entreprises. Seul le chemin
d'accès depuis le menu est coupé.

### Pourquoi le graphe d'appel ne montre pas le calcul

La cartographie depuis le gestionnaire d'arbitrage
(`decompilation_ghidra/arbre_arbitrage.txt`) n'atteint que 193 fonctions, dont
9 seulement utilisent le x87 et presque aucune arithmétique. Ce n'est pas que
le calcul soit absent : Delphi dispatche massivement par **tables de méthodes
virtuelles**, et ces appels indirects (`(*(code *)*puVar1)(...)`) ne sont pas
résolus statiquement. Le graphe est donc tronqué, et retrouver le calcul
demanderait une analyse des VMT — piste non explorée à ce jour.

---

## 9. Le moteur de simulation est absent de ce binaire

C'est la conclusion de l'analyse, et elle est mesurée, pas supposée.

### Chaque fonction de calcul flottant appartient à un formulaire

En rapprochant les segments des classes Delphi
(`decompilation_ghidra/classes_par_segment.txt`), toutes les fonctions riches
en x87 se révèlent être des écrans de saisie ou d'affichage :

| Fonction | x87 | Segment | Classe | Rôle |
|---|---|---|---|---|
| `FUN_1088_4c86` | 220 dont 57 comparaisons | 1088 | `TFormSADD_Decisions` | saisie animateur, contrôle de bornes |
| `FUN_1030_3fc2` | 110 | 1030 | `TFormSERE_Etudes` | affichage des études de marché |
| `FUN_1098_38db` | 65 | 1098 | `TFormSCDD_Decisions` | saisie |
| `FUN_1020_3e65` | 54 | 1020 | `TFormGraphe2` | tracé de graphiques |
| `FUN_1008_161f` | 41 | 1008 | `TFormSARP_Produits` | affichage de résultats |

Aucune n'est un moteur de calcul.

### Le décompte d'instructions rend la chose impossible

Sur **l'intégralité** du programme : 1141 instructions x87, dont seulement
**102 d'arithmétique réelle** — 39 `FMUL`, **4 `FDIV`**, 49 `FADD`, 10 `FSUB`.
Les 91 % restants sont des chargements, rangements et comparaisons.

Or le moteur devrait calculer, par période : l'attractivité pondérée sur cinq
facteurs pour jusqu'à 8 entreprises × plusieurs produits, la normalisation des
parts de marché, la répartition de la demande et le report en cas de rupture,
puis les 44 postes du bilan et du compte de résultat — amortissements, IS,
IFA, TVA, intérêts sur trois types de dette, masse salariale.

**Quatre divisions dans tout le binaire.** On ne calcule ni une part de marché,
ni un ratio, ni une moyenne, ni un amortissement, ni un pourcentage sans
division. `Simstra1.dll` ne contient rien de plus (11 opérations
arithmétiques, de quoi valider une clé).

### Ce que cela signifie

La version de démonstration n'est pas une version complète bridée : c'est un
binaire **évidé**. Le garde `DAT_1160_0042` décrit au chapitre 8 ne masque pas
un moteur dormant — il occupe la place où l'appel se trouvait.

Conséquence pratique : **aucune manipulation de ce binaire ne le fera arbitrer.**
La question n'est pas juridique, elle est matérielle : le code n'existe pas ici.

Conséquence pour la préservation : le moteur de Simstrat ne subsiste que dans
une **installation complète sous licence**. Les copies de démonstration
diffusées publiquement — y compris la variante anglaise — n'en contiennent
aucune trace.

### Limite de l'analyse

Ce raisonnement repose sur une analyse statique. Le graphe d'appel est tronqué
par le dispatch virtuel de Delphi, et la tentative de reconstruction des VMT a
échoué : dans l'image NE, les pointeurs lointains contiennent des maillons de
chaîne de relocation et non des adresses (voir
`decompilation_ghidra/tentative_vmt.txt`). Mais l'argument du décompte
d'instructions ne dépend pas du graphe d'appel : ces instructions
n'existent nulle part dans le fichier, atteignables ou non.

---

## 10. Exécution réelle sous Wine — vérification empirique

Le logiciel a été **effectivement exécuté** sous Wine 9.0 (Linux, 32 bits avec
support Win16), avec le BDE 16 bits installé. Captures dans
`captures_execution/`.

### Mise en œuvre

```sh
dpkg --add-architecture i386 && apt install wine wine32:i386 xvfb openbox
export WINEPREFIX=~/simstrat WINEARCH=win32
wine wineboot --init
wine SETUP.EXE -s          # installateur BDE 16 bits, mode silencieux
wine "Simstrat (FR).EXE"
```

Wine fournit tous les modules 16 bits dont l'exécutable a besoin —
`krnl386.exe16`, `user.exe16`, `gdi.exe16`, `commdlg.dll16`, `toolhelp.dll16` —
ce qui correspond exactement à la table d'imports du binaire.

### Observations

1. **Sans le BDE** : l'application démarre puis échoue avec
   `Exception EDatabaseError … erreur $2108` à l'initialisation du Borland
   Database Engine. C'est le symptôme exact d'un `IDAPI01.DLL` absent.
2. **Avec le BDE** installé dans `C:\IDAPI` (l'installateur écrit lui-même les
   sections `[IDAPI]` et `[Borland Language Drivers]` dans `WIN.INI`),
   l'application démarre normalement.
3. **Mode démonstration** : un filigrane rouge « Démonstration » barre l'écran
   principal, et les menus Animateur, Public, Entreprises, Impressions et
   Graphes sont grisés.
4. **Le garde de la version limitée est confirmé** : le menu `Fichier` propose
   « Nouveau jeu… » en apparence actif, mais le clic produit la boîte
   « **Non disponible en version limitée** » — exactement la chaîne localisée
   par décompilation à l'adresse `1010:352b`, appelée depuis
   `TTheMainForm.Nouveau1Click`.

Le point 4 valide la chaîne complète décompilation → prédiction → exécution :
le mécanisme décrit au chapitre 8 n'est plus une inférence, il est observé.

### Ce que cela implique

Faire tourner Simstrat sur une machine moderne ne demande **pas** de machine
virtuelle Windows : Wine suffit, sous Linux comme sous macOS. Sous Windows 11,
l'équivalent est otvdm/winevdm, qui réutilise le même code Win16 issu de Wine.

Le BDE reste la pièce indispensable, et son installateur d'origine
(InstallShield 3, 1996) s'exécute correctement sous Wine.
