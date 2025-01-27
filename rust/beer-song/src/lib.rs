

pub fn verse(n: u32) -> String {
  //println!("{}", n);
  if n == 0 {
    return String::from("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n");
  } else if n == 1 {
    return String::from("1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it around, no more bottles of beer on the wall.\n")
  } else {
    let b = n - 1;
    let bottles = if b == 1 { "bottle" } else { "bottles" }; 
    return format!("{n} bottles of beer on the wall, {n} bottles of beer.\nTake one down and pass it around, {b} {bottles} of beer on the wall.\n");
  }

  /* 
  let b = x - 1;
  while x > 0 {
    let bottles  = if b == 1 { "bottle "} else { "bottles"}; 
    //println!("{}", n);
    //let b = x - 1;
    //format!("{n} bottles of beer on the wall, {n} bottles of beer.\nTake one down and pass it around, {b} bottles of beer on the wall.\n");
    x = x - 1;
  }
  return format!("{n} bottles of beer on the wall, {n} bottles of beer.\nTake one down and pass it around, {b} bottle of beer on the wall.\n");
  */
}

pub fn sing(start: u32, end: u32) -> String {
  let mut song = String::new();
  let mut c = start;
  //println!("{}", start);
  //println!("{}", end);
  while c >= end {
    song.push_str(&verse(c));
    println!("{}", c);
    
    if c > end {
      song.push_str("\n");
    }
    if c > end {
      c = c - 1;
    } else { break; }
  }
  return song;
  //todo!("sing verses {start} to {end}, inclusive");
}


