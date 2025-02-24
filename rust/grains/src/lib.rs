pub fn square(s: u32) -> u64 {
    //todo!("grains of rice on square {s}");
    if s == 0 {
      //return 0;
      panic!("Error");
    }
    if s < 1 || s > 64 {
      //return 0;
      panic!("Error");
    }

    let mut grains = 1;
    let mut i = 1;
    while i < s {
      grains *= 2;
      //println!("s: {}", s);
      //println!("Grains: {}", grains);
      i += 1;
    }
    return grains

}

pub fn total() -> u64 {
  //sum of the total
  let mut total: u64 = 0;
  let mut i = 0;
  let mut grains = 1;
  while i < 64 {
    i += 1;
    total += square(i);
  } 
  return total 

}
