fn main() {
    let list: [i32; 5] = [1, 3, 5, 7, 9];
    assert_eq!(binary_search(&list, 3), 1);
    assert_eq!(binary_search(&list, -1), -1);
    println!("test 1 {}", binary_search(&list, 3));
    println!("test 2 {}", binary_search(&list, -1));
}

fn binary_search(list: &[i32], item: i32) -> i32 {
    let mut low: i32 = 0;
    let mut high: i32 = list.len() as i32 - 1;
    while low <= high {
        let mid: i32 = (low + high) / 2;
        let guess: i32 = list[(mid as usize)];
        if guess == item {
            return mid as i32;
        }

        if guess > item {
            high = mid - 1;
        } else {
            low = mid + 1;
        }

    }
    return -1;
}