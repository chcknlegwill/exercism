pub fn raindrops(n: u32) -> String {
    //todo!("what sound does Raindrop #{n} make?")
    //may need to declare a string and add results into it and then
    //return the whole string -> maybe use string.push() ??
    //
    //trying to use vectors for the strings
    let mut chars = String::new();

    if n == 1 {
      chars.push_str(&n.to_string()); //chars.push_str working!!!!
      return chars;
    } 
    if n % 3 == 0 { //n is divisible by 3.
        chars.push_str("Pling");
    }
    if n % 5 == 0 {
        chars.push_str("Plang");
    } 
    if n % 7 == 0 {
        chars.push_str("Plong");
    } 
    if chars.is_empty() {
        chars.push_str(&n.to_string());
    } else {
        return chars;
    }
    chars

}
