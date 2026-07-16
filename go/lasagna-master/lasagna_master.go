package lasagnamaster

// TODO: define the 'PreparationTime()' function
func PreparationTime(layers []string, averagePrepTime int) int {
	if averagePrepTime == 0 {
		return len(layers) * 2;
	} 

	return len(layers) * averagePrepTime



}



// TODO: define the 'Quantities()' function
func Quantities(layers []string) (int, float64) {
	noodlesGram := 0
	sauceLiters := 0.0
	for i := len(layers) -1; i >= 0; i-- {
		if layers[i] == "noodles" {
			noodlesGram += 50;
		}

		if layers[i] == "sauce" {
			sauceLiters += 0.2;
			
		}
		//fmt.Printf("Layer %d: %s", i, layers[i])
	}

	return noodlesGram, sauceLiters
}

// TODO: define the 'AddSecretIngredient()' function

func AddSecretIngredient(friendList []string, myList []string) {
	specialIngredient := friendList[len(friendList)-1]
	myList[len(myList)-1] = specialIngredient 

}

// TODO: define the 'ScaleRecipe()' function
func ScaleRecipe(amount []float64, portions int) []float64 {
	
	scaleFactor := float64(portions) / 2.0 
	scaledRecipe := make([]float64, len(amount))

	for i := 0; i < len(amount); i++ {
		scaledRecipe[i] = amount[i] * scaleFactor 
	}

	return scaledRecipe
}


// Your first steps could be to read through the tasks, and create
// these functions with their correct parameter lists and return types.
// The function body only needs to contain `panic("")`.
//
// This will make the tests compile, but they will fail.
// You can then implement the function logic one by one and see
// an increasing number of tests passing as you implement more
// functionality.
