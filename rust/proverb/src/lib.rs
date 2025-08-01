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
  println!("List length: {}", list_length);
  //generating a list of all the items 
  for i in 0..list_length {
    println!("Item: {}", list[i]);
    //add last line first (to pass tests accordingly)
    proverb.push_str("And all for the want of a {}.", )
  }

  println!("List = {:?}", list);
return proverb;
}
