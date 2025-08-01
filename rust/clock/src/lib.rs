#[derive(Debug)]
pub struct Clock;

//I'll do this when I have more time
impl Clock {
    pub fn new(hours: i32, minutes: i32) -> Self {
      let _hours = hours;
      let _minutes = minutes;
      //todo!("Construct a new Clock from {hours} hours and {minutes} minutes");
      //need to iterate and count up the hours from the minutes
      let mut i = hours;
      let mut realHours = 0;
      while i > 0 {
        realHours += 1;
        i += 1;
      }
      println!("{}", realHours);


    }

    pub fn add_minutes(&self, minutes: i32) -> Self {
        todo!("Add {minutes} minutes to existing Clock time");
    }
}

