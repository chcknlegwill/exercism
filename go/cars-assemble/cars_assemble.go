package cars

// CalculateWorkingCarsPerHour calculates how many working cars are
// produced by the assembly line every hour.
func CalculateWorkingCarsPerHour(productionRate int, successRate float64) float64 {
	return float64(productionRate) * (successRate / 100.0)
}

// CalculateWorkingCarsPerMinute calculates how many working cars are
// produced by the assembly line every minute.
func CalculateWorkingCarsPerMinute(productionRate int, successRate float64) int {
	return int(CalculateWorkingCarsPerHour(productionRate, successRate) / 60)
}

// CalculateCost works out the cost of producing the given number of cars.
func CalculateCost(carsCount int) uint {
	//need to get the groups of 10 first
	group := uint(95000)
	groupTen := carsCount / 10

	//then declare the individual ones
	indiv := uint(10000)
	inivGroup := carsCount % 10

	totalCost := (uint(groupTen) * group) + (uint(inivGroup) * indiv)

	return totalCost
}
