#!/usr/bin/env bash
set -u
# Looping helper to trigger 'Nouveau jeu' repeatedly until detected
# Usage: TRIES=0 ./scripts/try_newgame.sh

DISPLAY=${DISPLAY:-:99}
XAUTHORITY=${XAUTHORITY:-/tmp/xvfb-run.3lszOk/Xauthority}
TRIES=${TRIES:-0}   # 0 means infinite
SLEEP=${SLEEP:-1}
LOG=${LOG:-/tmp/try_newgame.log}
APP_PATH="Simstrat (FR)/Simstrat (FR).EXE"

echo "==== try_newgame.sh start $(date) DISPLAY=$DISPLAY XAUTHORITY=$XAUTHORITY TRIES=$TRIES" >> "$LOG"

attempt=0
while true; do
  attempt=$((attempt+1))
  echo "[${attempt}] loop start $(date)" >> "$LOG"

  # ensure wine process exists
  if ! pgrep -f "winevdm.*${APP_PATH}" >/dev/null 2>&1; then
    echo "[${attempt}] wine process not found; starting app" >> "$LOG"
    DISPLAY=$DISPLAY XAUTHORITY=$XAUTHORITY xvfb-run -a wine "$APP_PATH" &
    sleep 2
  fi

  export DISPLAY XAUTHORITY

  # find candidate windows for the app
  mapfile -t wins < <(DISPLAY=$DISPLAY XAUTHORITY=$XAUTHORITY xdotool search --name "Simstrat" 2>/dev/null || true)
  before=${#wins[@]}
  echo "[${attempt}] found $before candidate windows" >> "$LOG"

  if [ $before -gt 0 ]; then
    for w in "${wins[@]}"; do
      echo "[${attempt}] sending Alt+n to window $w" >> "$LOG"
      DISPLAY=$DISPLAY XAUTHORITY=$XAUTHORITY xdotool windowactivate --sync $w key --window $w Alt+n 2>>"$LOG" || true
      sleep $SLEEP
    done
  else
    # fallback: try a few visible windows
    mapfile -t allw < <(DISPLAY=$DISPLAY XAUTHORITY=$XAUTHORITY xdotool search --onlyvisible --name "" 2>/dev/null || true)
    echo "[${attempt}] fallback send to ${#allw[@]} visible windows" >> "$LOG"
    i=0
    for w in "${allw[@]}"; do
      [ $i -ge 5 ] && break
      echo "[${attempt}] fallback sending Alt+n to window $w" >> "$LOG"
      DISPLAY=$DISPLAY XAUTHORITY=$XAUTHORITY xdotool windowactivate --sync $w key --window $w Alt+n 2>>"$LOG" || true
      sleep $SLEEP
      i=$((i+1))
    done
  fi

  # check for a new dialog/window that mentions Nouveau
  mapfile -t nouveau < <(DISPLAY=$DISPLAY XAUTHORITY=$XAUTHORITY xdotool search --name "Nouveau" 2>/dev/null || true)
  if [ ${#nouveau[@]} -gt 0 ]; then
    echo "[${attempt}] success: found Nouveau window(s): ${nouveau[*]}" >> "$LOG"
    echo "SUCCESS" >> "$LOG"
    exit 0
  fi

  # heuristic: window count increase
  total_before=$(DISPLAY=$DISPLAY XAUTHORITY=$XAUTHORITY xdotool search --onlyvisible --name "" 2>/dev/null | wc -l || true)
  sleep $SLEEP
  total_after=$(DISPLAY=$DISPLAY XAUTHORITY=$XAUTHORITY xdotool search --onlyvisible --name "" 2>/dev/null | wc -l || true)
  echo "[${attempt}] total windows $total_before -> $total_after" >> "$LOG"
  if [ "$total_after" -gt "$total_before" ]; then
    echo "[${attempt}] success by window count increase" >> "$LOG"
    echo "SUCCESS" >> "$LOG"
    exit 0
  fi

  if [ "$TRIES" -ne 0 ] && [ "$attempt" -ge "$TRIES" ]; then
    echo "[${attempt}] reached TRIES limit ($TRIES)" >> "$LOG"
    exit 2
  fi

done
#!/bin/bash
# Tentative automatique : envoyer Alt+N sur toutes les fenêtres X et détecter nouvelle fenêtre
DISPLAY=${DISPLAY:-:99}
XAUTH=${XAUTH:-/tmp/xvfb-run.3lszOk/Xauthority}
export DISPLAY XAUTHORITY=$XAUTH
TRIES=${TRIES:-20}
SLEEP=1
for i in $(seq 1 $TRIES); do
  echo "Attempt $i"
  before=$(xdotool --display "$DISPLAY" --xauth "$XAUTH" search --name "" 2>/dev/null | tr '\n' ' ')
  for w in $before; do
    xdotool --display "$DISPLAY" --xauth "$XAUTH" windowactivate $w 2>/dev/null || true
    xdotool --display "$DISPLAY" --xauth "$XAUTH" key --window $w Alt+n 2>/dev/null || true
  done
  sleep $SLEEP
  after=$(xdotool --display "$DISPLAY" --xauth "$XAUTH" search --name "" 2>/dev/null | tr '\n' ' ')
  echo "before:$before"
  echo "after: $after"
  # detect new window id
  for w in $after; do
    if [[ ! " $before " =~ " $w " ]]; then
      echo "New window detected: $w"
      xdotool --display "$DISPLAY" --xauth "$XAUTH" getwindowname $w || true
      exit 0
    fi
  done
done
exit 2
