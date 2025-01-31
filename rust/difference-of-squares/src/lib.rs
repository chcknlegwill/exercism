pub fn square_of_sum(n: u32) -> u32 {
    //todo!("square of sum of 1...{n}")
    let mut x = n;
    let mut sum = 0;
    while x > 0 {
        sum += x;
        //println!("sum {}", sum);
        x -= 1;
    }
    sum * sum
        //working!!!
}

pub fn sum_of_squares(n: u32) -> u32 {
    //todo!("sum of squares of 1...{n}")
    //got the idea from this site
    //this solution working apart from the 100 test case??
    let mut x = n;
    let mut b = 0;
    //println!("b: {}", b);
    while x > 0 {
        b = b + x * x;
        x -= 1;
    }
    b
    //working!!!!
}

pub fn difference(n: u32) -> u32 {
    //todo!("difference between square of sum of 1...{n} and sum of squares of 1...{n}")
    //ig you call each func into a number and then just calculate the difference
    let square_of_sum = square_of_sum(n);
    let sum_of_squares = sum_of_squares(n);
    let differnce = square_of_sum - sum_of_squares;
    differnce
}
