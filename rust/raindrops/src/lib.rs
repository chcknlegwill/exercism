pub fn raindrops(n: u32) -> String {
    //todo!("what sound does Raindrop #{n} make?")
    //may need to declare a string and add results into it and then
    //return the whole string
    let mut _x = n;
    String result = "";
    if n / 3 == 0 { //n is divisible by 3
      String::from("Pling")
    } else {
      String::from("{n}")
    }

}
