#!/usr/bin/env bash

main() {
  input="$1"
  output=""
  if (($input % 3 == 0)); then
    output+="Pling"
  fi
  if (($input % 5 == 0)); then
    output+="Plang"
  fi
  if (($input % 7 == 0)); then
    output+="Plong"
  fi
  
  if [[ -z $output ]]; then
    echo $input
  fi

  echo $output

}

main "$@"