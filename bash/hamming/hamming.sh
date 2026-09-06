main () {
  sequence1=$1
  sequence2=$2

  #echo ${#1}
  #echo ${#2}

  if [[ "$1" =~ [^a-zA-Z] ]]; then
    echo "1"
    exit 1
  fi

  if [[ "$#" -le 1 ]]; then 
    echo "Usage: hamming.sh <string1> <string2>"
    exit 1
  fi

  if [[ ${#1} -ne ${#2} ]]; then
    echo "strands must be of equal length"
    exit 1
  fi

  if [[ ${1} == "" ]] && [[ "${2}" == "" ]]; then 
    echo "0"
    exit 0 
  fi


  count=0

  for((i=0;i < ${#1};i++)) do 
    if [[ ${sequence1:i:1} != "${sequence2:i:1}" ]]; then
      ((count++))
    fi
  done

  echo $count
  exit 0
  



}

main "$@"

