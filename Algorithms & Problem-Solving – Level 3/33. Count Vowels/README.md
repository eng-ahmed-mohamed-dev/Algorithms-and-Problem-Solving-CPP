# Problem 33 – Level 3: Count Vowels

## Problem Description
Write a program that reads a string from the user, then counts how many vowels exist in that string.  
Vowels are: `a, e, i, o, u` (case-insensitive).

## Solution Idea
- Read the full string using `getline`.
- Loop through each character in the string.
- Convert each character to lowercase to handle both uppercase and lowercase letters.
- Check if the character is a vowel.
- Count how many vowels are found and print the result.

## Used Concepts
- Strings
- Functions
- Loops
- Conditional statements
- Character handling (`tolower`)
- Passing values to functions

## Files
- `CountVowels.cpp` – C++ source file containing the solution
- `README.md` – Problem description and solution explanation

## Notes
- The program counts vowels regardless of letter case.
- Spaces and non-letter characters are ignored automatically.