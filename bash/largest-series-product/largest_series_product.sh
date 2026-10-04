#!/usr/bin/bash

main () {
  local digits="$1"
  local span="$2"

  if (( span < 0 )); then
    echo "span must not be negative"
    exit 1
  fi

  if [[ $2 > $1 ]]; then
    echo "span must not exceed string length"
    exit 1
  fi

  re='^[0-9]+$'
  if [[  $1 != $re ]]; then
    echo "BRUH"
    exit 1
  fi





  count=0

  for ((i=0;i < ${#1};i++)) do
    #whatever
    echo $2
  done

}

main "$@"

