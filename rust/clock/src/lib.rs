pub struct Clock;

impl Clock {
    pub fn new(hours: i32, minutes: i32) -> Self {
      todo!("Construct a new Clock from {hours} hours and {minutes} minutes");
      let mut i = hours;
      let mut realHours = 0;
      while i > 0 { //while hours = true
        realHours += 1;
        i += 1;
      }
      println!("{}", realHours);
    }

    pub fn add_minutes(&self, minutes: i32) -> Self {
        todo!("Add {minutes} minutes to existing Clock time");
    }
}
