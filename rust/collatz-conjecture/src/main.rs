
use collatz_conjecture::collatz;

fn main() {
  let number: u64 = 10;
  let sequence = collatz(number);
  println!("{:?}", sequence)
}