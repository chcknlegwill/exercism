pub fn egg_count(display_value: u32) -> usize {
  
  //have to convert number to binary (32 bits)
  println!("display value: {}", display_value);
  
  if display_value == 0 {
    let zero: usize = 0;
    return zero; //base case
  }
  //after base case convert display_value to binary
  let a = format!("{display_value:b}");
  //println!("display_value in binary: {}", a); working!!

  //iterate through binary string and count up the 1's
  let mut i = 0;
  for c in a.chars() {
    //println!("{}", c);
    if c == '1' {
      i += 1;
    }
  }


  i

}
