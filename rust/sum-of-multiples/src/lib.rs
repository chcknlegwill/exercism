pub fn sum_of_multiples(limit: u32, factors: &[u32]) -> u32 {
  //todo!("Sum the multiples of all of {factors:?} which are less than {limit}")
  if limit == 1 || limit == 0 {
    return 0; //base case if the limit is not enough for multiples of the factors
  }

  //factors are a list of numbers -> need to make a algorithm that
  //gets ALL multiples PER item in the list
  let mut all_multiples = Vec::new();

  for &factor in factors {
    //println!("{}", factor);

    if factor == 0 {
      continue;
    } //all_multiples.push(i); -- need to avoid pushing 0's

    //level number is the limit(I think??), so find all multiples below the limit
    let mut i = factor; //i needs to start as a factor (multiple so it goes off from 1 x i)
    //let mut multiples: &[u32];
    // &[u32] does not allow for += or .push operations so moving to a vector instead for easeir coding
    
    while i < limit {
    if !all_multiples.contains(&i) { //checks if all_multiples already contains the multiple
      all_multiples.push(i); //if it does, then skip (i += factor). If it does not then push to the Vec.
    }
    //all_multiples.push(i);
    i += factor;
    }
  }
  //println!("{:?}", all_multiples);
  all_multiples.iter().sum()

  //BOOOM!! ALL TESTS PASSING BABY!!!!!!
}
