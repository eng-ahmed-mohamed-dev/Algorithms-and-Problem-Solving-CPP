# Problem 44 – Level 3: Remove Punctuations

## Problem Description
Write a program that removes all punctuation characters from a given string and prints the cleaned result.

## Solution Idea
The program loops through each character in the string and checks if it is a punctuation mark using the built-in `ispunct` function.  
If the character is not punctuation, it gets added to a new string.  
Finally, the cleaned string is printed.

## Used Concepts
- Strings
- Loops
- Functions
- Character handling with `<cctype>`

## Files
- `Remove Punctuations.cpp` → Contains the solution implementation

## Notes
The solution uses the standard C++ `ispunct` function to detect punctuation characters.