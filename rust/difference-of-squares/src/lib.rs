pub fn square_of_sum(n: u32) -> u32 {
    //todo!("square of sum of 1...{n}")
    let mut x = n;
    let mut sum = 0;
    while x > 0 {
      sum += x;
      println!("sum {}", sum);
      x -= 1;
    }
    sum * sum
    //working!!!

   
}

pub fn sum_of_squares(n: u32) -> u32 {
    todo!("sum of squares of 1...{n}")
}

pub fn difference(n: u32) -> u32 {
    todo!("difference between square of sum of 1...{n} and sum of squares of 1...{n}")
}
