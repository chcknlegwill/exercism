package booking

import(
	"time"
	"fmt"
	"strings"
	"strconv"
)



// Schedule returns a time.Time from a string containing a date.
func Schedule(date string) time.Time {

	fmt.Printf("input: %q \n\n", date)
	//fmt.Printf("now: %s \n\n", time.Now())
	
	//going to try t.Log

	/*
	then := time.Date(
		2009, 11, 17, 20, 34, 58, 651387237, time.UTC)
		*/

	parts := strings.Split(date, " ")
	dateParts := strings.Split(parts[0], "/")
	timeParts := strings.Split(parts[1], ":")

	year, _ := strconv.Atoi(dateParts[0])
	month, _ := strconv.Atoi(dateParts[1])
	day, _ := strconv.Atoi(dateParts[2])

	hour, _ := strconv.Atoi(timeParts[0])
	minute, _ := strconv.Atoi(timeParts[1])
	second, _ := strconv.Atoi(timeParts[2])

	//fmt.Println("month: %s\n", dateParts[0])
	fmt.Printf("day: %s\n", dateParts[0])
	fmt.Printf("month: %s\n", dateParts[1])
	fmt.Printf("year: %s\n\n", dateParts[2])


	fmt.Printf("hour: %s\n", timeParts[0])
	fmt.Printf("minute: %s\n", timeParts[1])
	fmt.Printf("second: %s\n", timeParts[2])



	return time.Date(
		year,
		time.Month(month), 
		day,
		hour,
		minute,
		second,
		0,
		time.UTC,
		
	)


	//return then 
}

// HasPassed returns whether a date has passed.
func HasPassed(date string) bool {
	panic("Please implement the HasPassed function")
}

// IsAfternoonAppointment returns whether a time is in the afternoon.
func IsAfternoonAppointment(date string) bool {
	panic("Please implement the IsAfternoonAppointment function")
}

// Description returns a formatted string of the appointment time.
func Description(date string) string {
	panic("Please implement the Description function")
}

// AnniversaryDate returns a Time with this year's anniversary.
func AnniversaryDate() time.Time {
	panic("Please implement the AnniversaryDate function")
}
