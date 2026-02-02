# Problem 28 – Invert All Letter Case (Level 3)

## Problem Description
Write a program that reads a string, inverts the case of all its letters, and prints the result.

Uppercase letters become lowercase, and lowercase letters become uppercase.

## Solution Idea
- Read the full string using `getline`.
- Loop through each character in the string.
- Check the character case.
- Convert uppercase letters to lowercase and vice versa.
- Print the updated string.

## Used Concepts
- Strings
- Loops
- Functions
- Character handling (`<cctype>`)
- `isupper`, `tolower`, `toupper`

## Files
- `28. invert All Letter Case.cpp`
- `README.md`

## Notes
- The program processes the string character by character.
- Spaces and non-letter characters are handled safely.