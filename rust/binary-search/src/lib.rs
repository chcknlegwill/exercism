//using the same while loop as I did for the C track.
//Time-complexity: O(log n)
//Space-complexity: O(1)

pub fn find(array: &[i32], key: i32) -> Option<usize> {
  //todo!("Using the binary search algorithm, find the element '{key}' in the array '{array:?}' and return its index.");
  if array.is_empty() {
      return None;
    }
    //println!("'{key}'");
    let length = array.len();

    let mut left = 0;
    let mut right = length - 1;
    while left <= right {
      let mid = left + (right - left) / 2;
      if array[mid] == key {
        return Some(mid);
      }
      if array[mid] < key {
        left = mid + 1;
      } else {
        if mid == 0 {
          return None;
        }
        right = mid -1;
      }
    }
    return None;
}
