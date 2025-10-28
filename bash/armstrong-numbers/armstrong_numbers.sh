#!/usr/bin/env bash

main () {
  #echo $0

  if (($1 <= 0 )); then
    echo "true" #must output, not just return
    return 0  
  fi

  num=$1
  numLength=${#1}
  #echo $numLength

  #now need to get array for list of numbers to add

  #echo "num: " $1 
  #echo "numLength:" $numLength

  numArray=()
  #echo "numArray:" $numArray

  for ((i = 0 ; i < numLength ; i++)); do
    numTemp=${num:i:1} # Extract the digit
    numArray+=("$numTemp") # Append the extracted digit
  done
  #echo "numArray(populated):" ${numArray[*]}
  armstrongNumber=0
  for nums in "${numArray[@]}"; do
    numberPower=1
    for((j = 0 ; j < numLength ; j++)) do
      numberPower=$((numberPower * nums))
    done

    armstrongNumber=$((armstrongNumber + $numberPower))
  done

  #echo armstrongNumber: $armstrongNumber
  if [[ $armstrongNumber == $1 ]]; then
    echo "true"
    return 0 #must terminate here or will also echo false
  fi
  echo "false"


}


main "$@"