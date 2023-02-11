
fn main() {
    let mut numbers: Vec<i32> = std::env::args()
        .skip(1)
        .map(|x| match x.parse() {
            Ok(n) => n,
            Err(_) => {
                eprintln!("error: '{}' is not a valid number", x);
                std::process::exit(1);
            }
        })
        .collect();

    numbers.sort();

    numbers.iter()
        .for_each(|x| println!("{}", x));
}
