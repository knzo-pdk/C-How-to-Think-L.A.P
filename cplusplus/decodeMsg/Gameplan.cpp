restate problem:
- Modulo integer starts with 27 if in uppercase mode. 
    + if %27 == 0, switch to lowercase mode.
    + if %27 == 0, switch to punctuation mode.
    + if %9 == 0, switch to uppercase mode.
    + else keep the same mode.
- input integer % 27 or % 27 or % 9 depends on mode.
- turn modulo result into alphabet letters: 1 = a, 8 = h, 2 = b.        [V]
- turn letters into uppercases in uppercase mode: 1 = a                 [V]
-    \\             lowercases in lowercase mode.                       [V]
-    \\             punctuations                                        [V]
- continuously cycle through the integers til end of input.             [V]
    + turn characters into whole integers.
        + keep reading characters and if it's multi-digits, process.
            + process: 1-2-3-1. What could the vertical tool do



input value of 143 in uppercase mode would yield the letter.
H because 143 modulo 27 is 8 and H is the eighth letter in the alphabet.


Write a program to read a number character by character and convert 
it to an inte- ger, using just one char variable and one int variable.
The number will have either three or four digits.

Write a program to read a number character by character and convert 
it to an inte- ger, using just one char variable and two int variables. 
The number will have either three or four digits.
