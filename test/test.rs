// Comment
fn greet(name: &str) {
    println!("Hello, {}!", name);
}

fn add(a: i32, b: i32) -> i32 {
    a + b
}

fn square_array(arr: &[i32]) -> Vec<i32> {
    arr.iter().map(|&x| x * x).collect()
}

fn main() {
    greet("Alice");
    println!("Sum of 3 and 5: {}", add(3, 5));
    let numbers = [1, 2, 3, 4, 5];
    let squares = square_array(&numbers);
    println!("Squares: {:?}", squares);
}
