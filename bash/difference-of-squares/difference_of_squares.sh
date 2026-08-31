#!/bin/bash

square_of_sum() {
  local number=$1
  local sum=0
  local i=1

  while [ "$i" -le "$number" ]; do 
    sum=$(( sum +  i))
    ((i++))
  done
  
  sum=$(( sum * sum))
  echo "$sum"

}


sum_of_squares() {
  local number=$1
  local sum=0
  local i=1

  while [ "$i" -le "$number" ]; do
    sum=$(( sum + (i * i) ))
    ((i++))
  done
  echo "$sum"
  #echo "$number"
  
}


difference() {
  local number=$1
  local square_sum=$(square_of_sum "$number")
  local sum_square=$(sum_of_squares "$number")

  echo $(( square_sum - sum_square ))

}

"$@"
