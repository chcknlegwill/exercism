package collatzconjecture

import "errors"

int steps(int start)
	//below is to solve the other tests (number being 0 & negative numbers)

	if n <= 0 {
		return 0, errors.New("must be a positive integer")
	}

	//if n is even -> n / 2
	//if n is odd - n * 3 + 1 to get 3n + 1.
	//repeat these two indefinitly
	var steps int
	var a int

	println("number:", n)
	for 1 < n {
		println("n: ", n)
		if n%2 == 0 {
			n = n / 2
			steps++
		} else {
			n = n*3 + 1
			steps++
		}
		println("steps: ", steps)
		a++
	}

	return steps, nil
}
