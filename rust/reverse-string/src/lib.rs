pub fn reverse(input: &str) -> String {
    print!("input: {}", input);
    //todo!("Write a function to reverse {input}");
    let mut reversed_str= String::new();

    for c in input.chars().rev() {
      reversed_str.push(c);
    }

    reversed_str
    //removed unneeded return statement???
}
