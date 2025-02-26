pub fn reply(message: &str) -> &str {
  let message = message.trim(); // Remove leading and trailing whitespace

  //base case
  if message.is_empty() {
      return "Fine. Be that way!";
  }

  //had to add a vector as the numbers as well as the multi-line questions made it 
  //so this way passes the tests
  let lines: Vec<&str> = message.lines().collect();
  let last_line = lines.last().unwrap_or(&"").trim();
  if last_line.ends_with('?') {
      // (uppercase letters with '?')
      let has_uppercase = last_line.chars().any(|c| c.is_alphabetic() && c.is_uppercase());
      let has_lowercase = last_line.chars().any(|c| c.is_alphabetic() && c.is_lowercase());
      //easier to split these into two variables now that I added the vector
      if has_uppercase && !has_lowercase {
          return "Calm down, I know what I'm doing!";
      }
      return "Sure.";
  }

  //if shouting (all cap letters)
  let has_letters = message.chars().any(|c| c.is_alphabetic());
  let is_shouting = has_letters && !message.chars().any(|c| c.is_alphabetic() && c.is_lowercase());
  if is_shouting {
      return "Whoa, chill out!";
  }

  "Whatever."
}