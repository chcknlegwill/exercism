package speed

// TODO: define the 'Car' type struct
type Car struct {
	battery      int
	batteryDrain int
	speed        int
	distance     int
}

// NewCar creates a new remote controlled car with full battery and given specifications.
func NewCar(speed, batteryDrain int) Car {
	//panic("Please implement the NewCar function")
	car := Car{battery: 100, speed: speed, batteryDrain: batteryDrain}
	return car
}

// TODO: define the 'Track' type struct
type Track struct {
	distance int
}

// NewTrack creates a new track
func NewTrack(distance int) Track {
	//panic("Please implement the NewTrack function")
	track := Track{distance: distance}
	return track
}

// Drive drives the car one time. If there is not enough battery to drive one more time,
// the car will not move.
func Drive(car Car) Car {
	//panic("Please implement the Drive function")
	if car.battery >= car.batteryDrain {
		car.battery = car.battery - car.batteryDrain
		car.distance = car.distance + car.speed
	}

	return car
}

// CanFinish checks if a car is able to finish a certain track.
func CanFinish(car Car, track Track) bool {
	//panic("Please implement the CanFinish function")

	drives := car.battery / car.batteryDrain
	totalDistance := drives * car.speed

	return totalDistance >= track.distance
}
