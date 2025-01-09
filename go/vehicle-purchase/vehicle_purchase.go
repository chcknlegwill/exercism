package purchase

// NeedsLicense determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
func NeedsLicense(kind string) bool {
	if kind == "car" || kind == "truck" { //as only car and truck need a license, only need to check for those two.
		return true
	} else {
		return false
	}
}

// ChooseVehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
func ChooseVehicle(option1, option2 string) string {
	if option1 < option2 { //lexicographical order 
		return option1 + " is clearly the better choice."
	} else {
		return option2 + " is clearly the better choice."
	}
}

// CalculateResellPrice calculates how much a vehicle can resell for at a certain age.
func CalculateResellPrice(originalPrice, age float64) float64 {
	//panic("CalculateResellPrice not implemented")

//rules:  < 3 years old = 80% of originalPrice, < 10 years old = 50% of originalPrice, 3 years old < 70% (as long as less than) < 10 years old.

  if(age > 10) {
    return originalPrice / 2;
    //^over 10 years old = 50% of originalPrice
  } else if (age < 10 && age > 3) {
    //70% of originalPrice
    originalPrice = (70 / 100) * originalPrice; 
    return originalPrice;
  } else if () {
    originalPrice = ()

  return originalPrice ; 
  }




  
}
