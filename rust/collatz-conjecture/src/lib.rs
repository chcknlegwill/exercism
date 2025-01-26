
pub fn collatz(n: u64) -> Option<u64> {
    //todo!("return Some(x) where x is the number of steps required to reach 1 starting with {n}")

    if n == 0 {
      return None;
    }

    //if n is even -> n / 2
    //if n is odd -> n * 3 + 1 to get 3n + 1.
    //repeat above steps indefinitley 
    let mut steps: u64 = 0; 
    let mut a: u64; 
    //let mut b: u64 = 0;
    let steps_return: Option<u64>;
    a = n;
    //chaning a to be mutable insteas of changing the 
    //function declaration above.

    while a != 1  {
      //println!("n, {}", n);
      //println!("a {}", a);
      if a % 2 == 0 {
        a = a / 2;
      } else {
        a = a * 3 + 1;
      }
      steps += 1;
      println!("steps: {}", steps);
}
      


   
    return Some(steps);
}

