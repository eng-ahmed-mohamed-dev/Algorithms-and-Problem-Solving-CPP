# Problem 24 – Level 3: Uppercase First Letter of Each Word

## Problem Description
Write a program that reads a string from the user, then converts the first letter of each word to uppercase.

## Solution Idea
The solution loops through the string character by character and uses a boolean flag to track the beginning of each word.  
When a non-space character appears right after a space (or at the start of the string), it is converted to uppercase.

## Used Concepts
- Strings
- Loops
- Conditional logic
- Functions
- `toupper()` from `<cctype>`

## Files
- `Upper First Letter of Each Word.cpp`
- `README.md`

## Notes
- Words are detected based on spaces.
- The program keeps the rest of the word unchanged.