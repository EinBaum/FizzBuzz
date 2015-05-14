# FizzBuzz Programming Language
The FizzBuzz Programming Language interpreter.

If an interviewer ever asks you about writing a FizzBuzz program in a 
language of your choice, give him this piece of code:

```
FizzBuzz 100
```

## Installation

Requirements: Any C compiler, make

Enter the project directory and type `make` to create the executable `fpl`.
Running the program without arguments will read from the standard input.
Alternatively you can specify filenames as arguments (each will be interpreted).


## Syntax

```
"FizzBuzz"<Space><Unsigned Integer><Optional Linebreak>
<Same as above again>
```

Example program:
```
FizzBuzz 15
FizzBuzz 3
```
will produce the following output:
```
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz
1 2 Fizz
```

Each number is separated with a space. A newline is written after the last number.
