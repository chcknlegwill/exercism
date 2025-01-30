use time::PrimitiveDateTime as DateTime;
use time::Duration;
//https://docs.rs/time/latest/time/
//importing Duration as the code is a LOT easier to do to with another library.

// Returns a DateTime one billion seconds after start.
pub fn after(start: DateTime) -> DateTime {
    //gigasecond is a thousand mllion seconds (1,000,000,000). 
    let gigasecond = Duration::seconds(1_000_000_000);
    start + gigasecond
}