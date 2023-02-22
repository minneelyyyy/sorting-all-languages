# Sorting
This is a collection of the same program written in multiple languages.

The current language list is:
- Rust
- C
- Javascript
- Haskell (unfinished)

# Expected Program Behavior
The behavior of each of these programs is as follows:
- The program must take a list of integers from the command line as program arguments. `sorting [integer]...`
- The program should print its arguments sorted from smallest to largest separated by newlines.
- If the user passes an argument that isn't an integer, the error should read as `error: '{arg}' is not a valid number` and be printed to stderr.
- If an error occurs, the program should exit with status 1.
- If no error occurs, the program should exit with status 0.
- If no arguments are supplied, the program should print nothing.
- Behavior when any of the arguments passed is an integer greater than `2147483647` or less than `-2147483648` is **undefined**.
- Behavior when any other error occurs (such as OOM) is **undefined**.

# Guidelines
- The program must follow everything outlined in **Expected Program Behavior**.
- Programs are not expected to support any specific operating system or architecture.
- You should have a convenient build system or a script to run the program. Just try to make the project structure match what someone would expect from a typical codebase written in that language.
