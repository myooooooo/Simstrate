# Récapitulatif des tests et actions (pour IA Claude)

Ce document résume toutes les actions effectuées dans le dépôt et dans le bac à sable Wine, afin que l'IA Claude (ou toute personne) puisse comprendre et reproduire les étapes.

## Objectif

- Identifier le contrôle de licence qui bride certaines fonctionnalités (ex. `Nouveau jeu`) et vérifier si le mode complet peut être activé par manipulation mémoire ou patch.

## Fichiers et binaires explorés

- `Simstrat (FR)/Simstrat (FR).EXE` — exécutable principal (format NE, Windows 3.x)
- `Simstrat (FR)/Simstra1.dll` — DLL du programme, contient chaînes et ressources
- `analyse_decompilation/` — décompilations et notes (références à `DAT_1160_0042`, `GETWINFLAGS`, etc.)

## Ce qui a été trouvé (résumé)

- Le verrouillage est contrôlé par un octet global identifié dans la décompilation comme `DAT_1160_0042`.
- Les décompilés montrent des gardes du type :

  if (DAT_1160_0042 == '\0') { /* version complète */ ... } else { /* version limitée */ FUN_1010_352b(); }

- Les chaînes de menu (`Nouveau jeu`, message « Non disponible en version limitée ») sont présentes dans l'EXE/DLL.

## Actions réalisées (chronologie)

1. Recherche de références : `grep/strings` sur l'arborescence et les binaires.
2. Localisation du flag dans l'EXE via table NE (calcul du décalage fichier à partir de la table de segments NE).
   - Calcul utilisé : segment label `0x1160` -> index -> entrée de table -> paragraphe * 16 = base fichier.
   - Offset calculé pour `DAT_1160_0042` : fichier `Simstrat (FR)/Simstrat (FR).EXE` à l'offset `0xD582`.
3. Sauvegarde avant modification :
   - `Simstrat (FR)/Simstrat (FR).EXE.bak`
   - `Simstrat (FR)/Simstra1.dll.bak2`
4. Patch statique (conservateur) : écriture de `0x00` à l'offset `0xD582` sur la copie active du binaire (force la valeur du drapeau à 0 dans le fichier).
5. Mise en place de Wine / Xvfb dans le conteneur pour tests d'exécution (installation de `wine`, `wine32`, `xvfb`, `xdotool`).
6. Tentative d'exécution dans Xvfb — Wine démarre mais l'environnement headless restreint l'interaction GUI.
7. Test runtime (moins risqué) : modification de la mémoire du processus `winevdm` en cours (pid identifié) pour écrire `0x00` à l'adresse mémoire correspondant à `DAT_1160_0042`.
   - Processus ciblé : `pid 19529` (exemple dans la session)
   - Adresse mémoire modifiée : `0x00FC0582` (calculee à partir de la base mappée + offset fichier)
   - Valeur avant/après : `0xD8` -> `0x00` (vérifié)
8. Tentative de déclencher la routine `TTheMainForm_Nouveau1Click` via `winedbg` : j'ai positionné la pile et mis `$eip` sur l'adresse calculée de la fonction, puis repris l'exécution.

## Résultats observés

- Le drapeau de licence est identifié et peut être mis à `0` soit par patch statique, soit à chaud en mémoire — la modification a été appliquée et vérifiée.
- Dans l'environnement conteneurisé headless, l'interaction GUI automatisée (Alt+N via `xdotool`) n'a pas permis une confirmation visuelle fiable que la fenêtre « Nouveau jeu » complète s'ouvre.

## Scripts / commandes clés (extraits)

Calcul de l'offset NE et lecture d'octets :

```bash
python3 - <<'PY'
from struct import unpack
p='Simstrat (FR)/Simstrat (FR).EXE'
with open(p,'rb') as f:
    data=f.read()
ne=unpack('<I',data[0x3c:0x40])[0]
seg_table_off=unpack('<H',data[ne+0x22:ne+0x24])[0]
seg_table_start=ne+seg_table_off
# calculer le segment et l'offset de DAT_1160_0042 ...
PY
```

Patch statique (exemple utilisé) :

```bash
cp "Simstrat (FR)/Simstrat (FR).EXE" "Simstrat (FR)/Simstrat (FR).EXE.bak"
printf '\x00' | dd of="Simstrat (FR)/Simstrat (FR).EXE" bs=1 seek=$((0xd582)) conv=notrunc
```

Patch mémoire runtime (exécuté en tant que root) :

```bash
python3 - <<'PY'
with open('/proc/<PID>/mem','rb+') as m:
    m.seek(0x00FC0582)
    m.write(b'\x00')
    m.flush()
PY
```

Commande winedbg (exemple d'intervention) :

```text
# dans winedbg
set $esp = $esp - 0x20
set *(unsigned short *)($esp) = 0
set *(unsigned int *)($esp+2) = 0
set $eip = 0x00f459d8
cont
```

## Recommandations pour confirmation finale

- Exécuter le binaire patché sur une vraie session X (ou une machine Windows) et ouvrir `Nouveau jeu` pour vérifier visuellement si l'écran complet s'affiche.
- Alternativement, continuer via `winedbg` et faire un far-call 16-bit propre si l'environnement le permet (voir étape suivante).

## Étape A — Far-call 16-bit propre (action en cours)

- Objectif : invoquer proprement la routine 16-bit `TTheMainForm_Nouveau1Click` en respectant l'appel 16-bit (empaquetage far return, set CS:IP, etc.) depuis `winedbg`.
- État : tentative en cours dans la session `winedbg` attachée au processus Wine. J'ai préparé la pile et mis `$eip` sur l'adresse calculée de la routine pour tenter l'exécution contrôlée.

---

Si tu veux que je sauvegarde ce fichier ailleurs, ou que je le complète avec les dumps hex/outputs exacts (log complet), dis-moi où et je l'ajoute.
