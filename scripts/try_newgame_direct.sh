#!/bin/bash
LOG=/tmp/try_newgame2.log
DISPLAY=${DISPLAY:-:99}
XAUTH=${XAUTHORITY:-/tmp/xvfb-run.3lszOk/Xauthority}
export DISPLAY XAUTHORITY=$XAUTH
TRIES=${TRIES:-0}
count=0
while true; do
  count=$((count+1))
  echo "[$count] $(date) loop" >> "$LOG"
  wids=$(DISPLAY=$DISPLAY XAUTHORITY=$XAUTH xdotool search --name "" 2>/dev/null || true)
  echo "[$count] wids: $wids" >> "$LOG"
  for id in $wids; do
    echo "[$count] send Alt+n to $id" >> "$LOG"
    DISPLAY=$DISPLAY XAUTHORITY=$XAUTH xdotool key --window $id Alt+n 2>>"$LOG" || echo "[$count] send err to $id" >> "$LOG"
  done
  found=$(DISPLAY=$DISPLAY XAUTHORITY=$XAUTH xdotool search --name ".*Nouveau.*" 2>/dev/null | head -n1 || true)
  if [ -n "$found" ]; then
    echo "FOUND at loop $count id $found" >> "$LOG"
    DISPLAY=$DISPLAY XAUTHORITY=$XAUTH xdotool getwindowname $found >> "$LOG" 2>&1 || true
    break
  fi
  if [ "$TRIES" -ne 0 ] && [ "$count" -ge "$TRIES" ]; then
    echo "Reached TRIES=$TRIES, exit" >> "$LOG"
    break
  fi
  sleep 2
done
