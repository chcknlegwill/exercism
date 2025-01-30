use matching_brackets::brackets_are_balanced;

fn main() {
  let string1 = "()";
  let string2 = "{}";
  let err_string1 = "(()";
  //println!("string1: {}", brackets_are_balanced(string1));
  //println!("string2: {}", brackets_are_balanced(string2));
  //println!("errString1: {}", brackets_are_balanced(errString1));
  brackets_are_balanced(string1);
  brackets_are_balanced(string2);


}
