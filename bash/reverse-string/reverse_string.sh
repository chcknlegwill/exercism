
main () {
  #input="$1" 
  #echo $input
  echo -n "$1" | rev
}

main "$@"