package booking

import(
	"time"
	"fmt"
	//"strings"
	//"strconv"
)



// Schedule returns a time.Time from a string containing a date.
func Schedule(date string) time.Time {

	layout := "1/2/2006 15:04:05"
	
	t, err := time.Parse(layout, date)
	if err != nil {
		fmt.Println("parsing error: ", err)
		return t
	}

	return t

}

// HasPassed returns whether a date has passed.
func HasPassed(date string) bool {
	now := time.Now() 
	layout := "January 2, 2006 15:04:05"
	
	t, err := time.Parse(layout, date)
	if err != nil {
		fmt.Println("parsing error: ", err)
		return false
	}


	if t.Before(now) {
		return true 
	} 

	return false

}

// IsAfternoonAppointment returns whether a time is in the afternoon.
func IsAfternoonAppointment(date string) bool {
	layout := "Monday, January 2, 2006 15:04:05"
	
	t, err := time.Parse(layout, date)
	if err != nil {
		fmt.Println("parsing error: ", err)
		return false
	}

	if t.Hour() >= 12 && t.Hour() < 18 {
		return true
	}

	return false 

}

// Description returns a formatted string of the appointment time.
func Description(date string) string {
	layout := "1/2/2006 15:04:05"

	fmt.Println("date(string): ", date)
	fmt.Println("")


	t, err := time.Parse(layout, date) 
	if err != nil {
		fmt.Println("err: ", err)
	}

	return_string := fmt.Sprintf("You have an appointment on %v, %v %v, %v, at %v:%v.", t.Weekday(), t.Month(), t.Day(), t.Year(), t.Hour(), t.Minute())
	
	return return_string

}

// AnniversaryDate returns a Time with this year's anniversary.
func AnniversaryDate() time.Time {
	now := time.Now()

	return time.Date(now.Year(), time.September, 15, 0, 0, 0, 0, time.UTC) 

}
