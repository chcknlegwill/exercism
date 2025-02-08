pub fn factors(n: u64) -> Vec<u64> {
  //todo!("This should calculate the prime factors of {n}")
  //tests are expecting a (list)? of numbers to be returned

  let mut a = n; //mutable copy of n
  let mut vec = Vec::new();
  //vec.push(1);
  //println!("{}", n);

  if n == 0 || n == 1 {
    return vec //no factors (base case)
  }
  
  while a % 2 == 0 { //while even
    vec.push(2);
    a /= 2;
  }

  let mut b = 3;
  while b * b <= a { //while odd
    while a % b == 0 {
      vec.push(b);
      a /= b;
    }
    b += 2;
  }

  //after both odd and even while statements
  //if a is a prime number, it should be above 1 
  if a > 1 {
    vec.push(a);
  }

  return vec;
}
