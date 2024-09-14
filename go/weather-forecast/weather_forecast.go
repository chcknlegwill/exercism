// Package weather ...
package weather

// CurrentCondition ...
var CurrentCondition string

// CurrentLocation  ...
var CurrentLocation string

/*
Forecast returns a string with the CurrentLocation & CurrentConditon variables

	to provide weather info for a specific area (CurrentLocation).
*/
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
