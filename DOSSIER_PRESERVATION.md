# Dossier de préservation — Simstrat(e)

**But de ce document.** Simstrat(e) est un logiciel pédagogique orphelin : son
éditeur a cessé son activité et il n'existe plus aucun moyen de se le procurer
ni d'obtenir du support. Ce dossier rassemble ce qui a été sauvé, ce qui
manque encore, et les démarches à entreprendre — de façon qu'une personne
extérieure à ce travail puisse le reprendre sans rien connaître du contexte.

Dernière mise à jour : août 2026.

---

## 1. De quoi s'agit-il

**Simstrat(e) — Simulation et stratégie de l'entreprise**, Éditions Labodidact.

Jeu de simulation de gestion à usage pédagogique. Jusqu'à 8 équipes
(« entreprises ») se concurrencent sur un marché commun. À chaque période, les
équipes saisissent leurs décisions (prix, production, publicité, embauches,
investissements, financement), l'animateur règle l'environnement économique
puis lance l'**arbitrage**, qui calcule le marché et produit les états
financiers de chacun.

- Version analysée : **1.21** (2005), exécutable **NE 16 bits** pour Windows 3.x
- Écrit en **Delphi 1.0**, données en tables **Paradox** via le **BDE**
- Une édition antérieure est cataloguée en 1996 : 4 disquettes + 2 manuels
- Déclinaisons par `Niveau` (1 à 4), du plus simple au plus complet
- Scénarios livrés : Fêtes, Supermac, Cimepa, Ordinatix, Télécom

Le fonctionnement détaillé — modèle de données, paramétrage, moteur — est
documenté dans [`analyse_decompilation/FONCTIONNEMENT.md`](analyse_decompilation/FONCTIONNEMENT.md).

## 2. Pourquoi c'est un cas de préservation

- La SARL **Labodidact** a cessé son activité ; plus aucun canal commercial.
- Le logiciel n'est **pas au dépôt légal** : la BnF détient 15 titres Labodidact
  publiés entre 1989 et 1992 (Eurostrat, Finstrat, Isidore, Forgam, Fimark,
  Graftext, Markinter, Hortiflor), mais **aucune notice pour Simstrate**.
  Le dépôt a cessé avant la sortie du logiciel.
- Le site de l'éditeur, `labodidact.online.fr`, répondait encore en 2026 mais
  n'y propose que la **démonstration**. Hébergement personnel fragile, sans
  personne pour le maintenir : **à archiver sans attendre**.
- D'après les notices d'autorité de la BnF, les auteurs principaux du catalogue
  Labodidact sont **Michel Risson** et **Sylvette Risson**. Toute recherche
  d'ayants droit doit se faire avec tact et sans insistance.

« Orphelin » ne signifie pas « libre de droits » : les droits subsistent et
appartiennent aux ayants droit. Ce dossier vise la **conservation**, pas la
redistribution.

## 3. Inventaire

### Ce qui est sauvé

| Élément | État |
|---|---|
| Exécutable **version de démonstration** FR 1.21 | conservé |
| Exécutable **version de démonstration** GB 1.21 | conservé (variante distincte) |
| `Simstra1.dll` (module de licence), FR et GB | conservé, non licencié |
| Fichier d'aide `Simstrat.HLP` | conservé **et extrait** : 505 rubriques, 167 Ko de texte |
| 6 jeux d'exemple complets (tables Paradox) | conservés et **entièrement décodés** |
| `LISEZMOI.TXT`, `LISTEFIC.TXT` | conservés |
| **BDE 16 bits** (installateur InstallShield 1996) | récupéré et **vérifié à l'exécution** |

### Ce qui manque

| Élément | Pourquoi c'est important |
|---|---|
| **Exécutable de la version complète** | Le seul qui permette de créer un jeu, saisir des décisions et **arbitrer**. Sans lui, le logiciel n'est pas utilisable en formation. |
| **`Simstra1.dll` sous licence** | 32 Ko. C'est lui qui fait sortir le logiciel du mode démonstration. |
| `SETUP.EXE` de Simstrat | Confort ; l'installation manuelle est possible. |
| **Les 2 manuels imprimés** | Susceptibles de documenter les **formules du modèle**, absentes du fichier d'aide. |

## 4. Démarches à entreprendre

### 4.1 Canopé Caen — piste principale

Le *Catalogue des logiciels disponibles à la médiathèque du CRDP de Caen*
(février 2002) référence :

> **Simstrate : simulation et stratégie de l'entreprise** — Labodidact, 1996 —
> 4 disquettes 3"½ + 2 manuels — PC / Windows 3.1 / Windows 95

Le CRDP de Basse-Normandie est devenu **Réseau Canopé**, resté **à la même
adresse** : 21 rue du Moulin-au-Roy, 14000 Caen. Le fonds peut donc être encore
sur place.

- Atelier Canopé 14 – Caen : `contact.atelier14@reseau-canope.fr` — 02 50 10 15 15
- Direction territoriale Normandie : `contact.dt-nor@reseau-canope.fr` — 02 50 10 15 00

**Modèle de courriel :**

> **Objet : Consultation d'un logiciel du fonds de l'ancienne médiathèque du CRDP — Simstrate (1996)**
>
> Bonjour,
>
> Je recherche un logiciel figurant au *Catalogue des logiciels disponibles à la
> médiathèque du CRDP de Caen* (février 2002) :
>
> **Simstrate : simulation et stratégie de l'entreprise** — Labodidact, 1996 —
> 4 disquettes 3"½ + 2 manuels — PC / Windows 3.1 / Windows 95
>
> Cet outil de simulation de gestion est encore utilisé en formation, mais son
> éditeur a cessé son activité : il n'existe plus aucun moyen de se procurer le
> logiciel ni sa documentation.
>
> Trois questions :
> 1. Cet exemplaire figure-t-il encore dans vos collections, ou a-t-il été
>    transféré ou retiré ?
> 2. Une consultation sur place est-elle envisageable ?
> 3. Les deux manuels pourraient-ils faire l'objet d'une reproduction
>    (photocopie ou numérisation), à des fins de conservation et d'usage
>    pédagogique ?
>
> Je vous remercie par avance.

*Réserve : des disquettes de 1996 sont souvent illisibles. Les manuels, eux,
se consultent — et pour comprendre le modèle ils valent peut-être davantage.*

### 4.2 Sauvegarder un poste existant

Là où le logiciel **fonctionne encore** sous licence, il faut agir avant que la
machine ne soit reformatée ou reversée au stock — un poste inutilisé pendant une
absence prolongée est le premier candidat à l'inventaire.

**Consigne à transmettre au service informatique ou à un collègue :**

> Merci de **ne pas reformater ni reverser** ce poste : il porte le seul
> exemplaire fonctionnel d'un logiciel utilisé en cours, dont l'éditeur n'existe
> plus.

**Si une copie est possible, récupérer :**

1. le **dossier d'installation de Simstrat en entier** (avec `Simstra1.dll` et
   les jeux) ;
2. le dossier **`C:\IDAPI`** en entier (le BDE et sa configuration) ;
3. le fichier **`C:\Windows\WIN.INI`**, ou au moins ces sections :

```ini
[IDAPI]
DLLPATH=C:\IDAPI
CONFIGFILE01=C:\IDAPI\IDAPI.CFG

[Borland Language Drivers]
LDPATH=C:\IDAPI\LANGDRV
```

Une simple copie de fichiers suffit : **ne pas tenter de réinstaller**.

### 4.3 Archiver le site de l'éditeur

`labodidact.online.fr` proposait encore les démonstrations FR et EN. À aspirer
et à soumettre à un service d'archivage web tant qu'il répond.

## 5. Faire fonctionner le logiciel aujourd'hui

Vérifié en pratique (captures dans
[`analyse_decompilation/captures_execution/`](analyse_decompilation/captures_execution/)).

**Aucune machine virtuelle Windows n'est nécessaire.** Windows 11 étant
exclusivement 64 bits, il n'exécute plus aucun binaire 16 bits ; mais Wine
fournit nativement les modules Win16 requis (`krnl386`, `user`, `gdi`,
`commdlg`, `toolhelp`).

```sh
dpkg --add-architecture i386 && apt install wine wine32:i386 xvfb openbox
export WINEPREFIX=~/simstrat WINEARCH=win32
wine wineboot --init
wine SETUP.EXE -s                 # installateur BDE 16 bits, mode silencieux
wine "Simstrat (FR).EXE"
```

Sous Windows 11, l'équivalent est **otvdm / winevdm**, qui réutilise le même
code Win16 issu de Wine.

**Le BDE est indispensable** : sans lui, l'application démarre puis échoue sur
`Exception EDatabaseError … erreur $2108`.

**Attention au piège** : la quasi-totalité des BDE trouvables en ligne sont en
**32 bits** et sont inutilisables — une application 16 bits ne peut pas charger
une DLL 32 bits. Le repère est le suffixe du nom de fichier :

| 16 bits — requis | 32 bits — inutile ici |
|---|---|
| `IDAPI01.DLL` | `IDAPI32.DLL` |
| `IDPDX01.DLL` | `IDPDX32.DLL` |

## 6. Ce qui a été reconstitué

Faute de sources, tout a été rétabli par analyse du binaire et des données.
Détail dans [`analyse_decompilation/`](analyse_decompilation/).

- **Le manuel intégral** extrait du fichier d'aide (505 rubriques), format que
  plus aucun outil courant ne lit — un lecteur WinHelp a été écrit pour cela.
- **Le modèle de données complet** : 11 tables Paradox, avec un lecteur
  autonome. Validation : les valeurs extraites correspondent **au centime** à
  celles qu'affiche l'application.
- **Les 34 écrans** de l'application, décodés depuis les ressources Delphi.
- **4272 fonctions décompilées en C**, avec 618 méthodes retrouvées sous leur
  vrai nom Delphi.
- **La formule du volume de marché**, vérifiée exactement sur les 41 volumes
  des six jeux d'exemple :

```
VolumeMarche(t) = DemandePotEnt × NombreEntreprises × Evolution(t)
                  × (1 + IndiceConjoncturel(t))
```

- **Les identités comptables**, vérifiées sur toutes les périodes.
- **Le bridage de la démonstration** : sept actions — dont l'arbitrage —
  bloquées par un drapeau posé par le contrôle de licence. Établi par
  décompilation, **puis confirmé à l'exécution**.

## 7. Ce qui reste non résolu

- **La formule de part de marché.** On sait que l'effet-prix ne dépend que du
  prix propre et qu'il est linéaire par produit ; que les effets publicité et
  force de vente sont relatifs aux concurrents ; que la fidélisation reporte les
  acquis. Mais le passage `EffetGlobal → PartMarche` n'est pas établi. Les
  données sont stockées à deux décimales, ce qui limite l'inférence
  statistique ; et le code du moteur n'a pas été localisé dans le binaire de
  démonstration.
- **Le moteur est-il présent dans le binaire de démonstration ?** Non tranché.
  L'analyse n'y trouve aucun calcul économique, mais le graphe d'appel est
  tronqué par le dispatch virtuel de Delphi, et le binaire embarque un système
  de licence à quatre modes qui suggère un build unique. Les deux lectures
  restent possibles.
- **Le mode d'évolution de la demande n° 1** (croissante/décroissante) n'est
  utilisé par aucun jeu d'exemple.

**Ces trois questions se règleraient d'un coup avec l'exécutable complet.**
C'est la raison pour laquelle sa récupération prime sur toute autre piste
technique.

---

## Si vous reprenez ce dossier

Par ordre d'efficacité :

1. **Écrire à Canopé Caen** (§4.1) — le courriel est prêt.
2. **Faire mettre de côté le poste** où le logiciel fonctionne (§4.2).
3. **Archiver le site de l'éditeur** (§4.3) tant qu'il répond.
4. Si l'exécutable complet est retrouvé : reprendre l'analyse de
   `analyse_decompilation/` — les outils sont fournis et fonctionnent.
