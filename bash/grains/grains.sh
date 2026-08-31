#!/usr/bin/env bash

if [[ "$1" == "total" ]]; then
  echo "18446744073709551615"
  exit 0
fi

if [[ $1 -gt 64 ]]  || [[ $1 -lt 1 ]]; then
  echo "Error: invalid input"
  exit 1
fi

square=0
grains=1
i=1

if [[ "$1" -eq 64 ]] ; then 
  echo "9223372036854775808"
  exit 0
fi

while [[ $i -lt "$1" ]]; do 
  #echo "grains: $grains"
  grains=$(( grains * 2))
  ((i++))
done

echo "$grains"

