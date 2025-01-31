use difference_of_squares::*;

fn main() {

  println!("square of 5: {}", square_of_sum(5));
  println!("sum of square 10: {}", sum_of_squares(10));
  println!("sum of square 5: {}", sum_of_squares(5));
  println!("sum of square 98: {}", sum_of_squares(98));
  //println!("sum of square 100: {}", sum_of_squares(100));
  println!("Difference of (square of 10: {})  & (sum of square 10: {}): {}", square_of_sum(10), sum_of_squares(10), difference(10))

}