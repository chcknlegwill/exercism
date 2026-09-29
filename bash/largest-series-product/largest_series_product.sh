#!/usr/bin/bash

main () {
  local digits="$1"
  local span="$2"

  if (( span < 0 )); then
    exit 1
  fi
  count=0

  for ((i=0;i < ${#1};i++)) do
    #whatever
    echo $2
  done

}

main "$@"

