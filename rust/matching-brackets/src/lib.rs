pub fn brackets_are_balanced(string: &str) -> bool {
    //todo!("Check if the string \"{string}\" contains balanced brackets");
    //println!("{}", &str);

    //going to have to be recursive for smth like this: ( {} [])
    //^--> Need to re-check if any OTHER brackets are WITHIN the brackets already parsed.
    //could use a stack to store the brackets and then pop them when the closing one is found?
    //println!("String to be checked: {}", string);

    let mut stack: Vec<char> = Vec::new();

    //let count = string.chars().count();
    for c in string.chars() {
     //println!("character: {}", c);
     //print!("pushed {} to stack", c );
     match c {
      '(' | '{' | '[' => stack.push(c), //push opening brackets into stack
      ')' => {                          //& then pop if case meets the expected char (closing bracket)
          if stack.pop() != Some('(') {
              return false;
          }
      }
      '}' => {
          if stack.pop() != Some('{') {
              return false;
          }
      }
      ']' => {
          if stack.pop() != Some('[') {
              return false; 
          }
      }
      _ => {} //ignore  all other characters (whitespace, numbs & operators).
  }
}
 stack.is_empty() 

}
     