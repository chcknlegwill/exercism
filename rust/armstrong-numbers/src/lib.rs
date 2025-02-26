pub fn is_armstrong_number(num: u32) -> bool {
    //todo!("true if {num} is an armstrong number")
    let mut sum = 0;
    let num_of_digits = num.to_string().len();
    let mut i = num;

    while i > 0 {
      let bruh = i % 10;
      sum += bruh.pow(num_of_digits.try_into().unwrap());
      i /= 10;
    }
    //print!("Num: {} \n", num);
    //print!("digits: {:?} \n", num_of_digits);
    //print!("Sum: {} \n", sum);
    sum == num
    //returns true or false if they are the same or not


  }