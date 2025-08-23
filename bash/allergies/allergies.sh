#!/usr/bin/env bash

main() {
  local score=$1
  local command=$2
  local item=$3
  local allergens=(eggs peanuts shellfish strawberries tomatoes chocolate pollen cats)
  local scores=(1 2 4 8 16 32 64 128)
  local result=()
  
  if [[ "$command" == "allergic_to" && score == 0 ]]; then
    echo "false" #no allergies at all
    return
  fi
  
  if [[ "$command" == "list" ]]; then
    for i in "${!allergens[@]}"; do
      if (( score & scores[i] )); then
        result+=("${allergens[i]}")
      fi
    done
    if [[ ${#result[@]} -eq 0 ]]; then
      echo ""
    else
      echo "${result[*]}"
    fi
  elif [[ "$command" == "allergic_to" && $command != 0 ]]; then
    for i in "${!allergens[@]}"; do
      if [[ "${allergens[i]}" == "$item" ]]; then
        if (( score & scores[i] )); then
          echo "true"
          return
        else
          echo "false"
          return
        fi
      fi
    done
    echo "false"  # Item not in allergen list
  fi
}

main "$@"