#!/bin/bash

if [ "$#" -ne 1 ]; then
  echo "Usage: error_handling.sh <person>" >&2
  exit 1
fi

main() {

 if [[ $1 = "Alice" ]]; then
   echo "Hello, Alice"
 fi

 if [[ $1 = "Alice and Bob" ]]; then
   echo "Hello, Alice and Bob"
 fi

 if [[ $1 = "" ]]; then
   echo "Hello, "
 fi

}


main "$@"
