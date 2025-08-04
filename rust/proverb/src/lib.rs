pub fn build_proverb(list: &[&str]) -> String {
  if list.is_empty() {
    return "".to_string();
  } 
  //todo!("build a proverb from this list of items: {list:?}")
  //"For want of a" + item1 + "the" + item2 "was lost."
  //"For want of a" + item2 + "the" + item3 "was lost."
  //"For want of a" + item3 + "the" + item4 "was lost."
  //"For want of a" + item4 + "the" + item5 "was lost."
  
  let mut proverb = String::new(); //returning as a whole string (use .push to add strings to )
  let list_length = list.len();
  let last = list[list_length -1 ];
  println!("List: {:?}", list);
  println!("Last: {:?}", last);
  println!("List length: {}", list_length);

  //handle edge cases before main loop:
  if list_length == 1 {
    proverb.push_str(&format!("And all for the want of a {}.", list[0]));
    return proverb;
  }

  
  //generating a list of all the items 
  for i in 0..list_length -1 {
    println!("Item: {}", list[i]);
    println!("After i:{} loop, proverb: {:?}", i, proverb);
    proverb.push_str(&format!("For want of a {} the {} was lost.\n", list[i], list[i + 1]));
  }
  proverb.push_str(&format!("And all for the want of a {}.", list[0]));
return proverb;
}



/*
================
==== scrap =====
================

  for i in 0..list_length {
    println!("Item: {}", list[i]);
    if list_length == 1 {
      bruh = "And all for the want of a ".to_string() + list[i] + ".";
      proverb.push_str(&bruh);
    }
    if list_length == 2 {
      
    }
    bruh = "And all for the want of a ".to_string() + list[i] + ".";
    //add last line first (to pass tests accordingly)
    //println!("string: {}", string);
    proverb.push_str(&bruh);
  }





*/