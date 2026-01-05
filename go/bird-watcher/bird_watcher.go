package birdwatcher

// TotalBirdCount return the total bird count by summing
// the individual day's counts.
func TotalBirdCount(birdsPerDay []int) int {
	//panic("Please implement the TotalBirdCount() function")
	sum := 0
	for i := 0; i < len(birdsPerDay); i++ {
		sum += birdsPerDay[i]
	}
	return sum

}

// BirdsInWeek returns the total bird count by summing
// only the items belonging to the given week.
func BirdsInWeek(birdsPerDay []int, week int) int {
	//panic("Please implement the BirdsInWeek() function")
	//based on a weekly (7-day) basis
	sum := 0
	weekCounter := 0
	for i := 0; i < len(birdsPerDay); i++ {

		if i == 7 || i%7 == 0 {
			weekCounter++
			//Working!!!
		}

		//convert weekCounter to number of days:
		if week == weekCounter {
			for j := 0; j < 7; j++ {
				sum += birdsPerDay[i+j]
			}
			return sum

		}
	}
	return sum
}

// FixBirdCountLog returns the bird counts after correcting
// the bird counts for alternate days.
func FixBirdCountLog(birdsPerDay []int) []int {
	//panic("Please implement the FixBirdCountLog() function")

	//sum := 0
	//correctedBirdCount := []int{}
	for i := 0; i < len(birdsPerDay); i++ {
		if i%2 == 0 {
			birdsPerDay[i]++ //add to first element & then every other element
		}

	}
	return birdsPerDay
}
