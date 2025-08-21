#!/usr/bin/env bash


main () {
  #echo "name" + $1
  if [[ -z $1 ]]; then
    echo "One for you, one for me."
  elif [[ -n $1 ]]; then
    echo "One for "$1", one for me."
  fi
}


main "$@"