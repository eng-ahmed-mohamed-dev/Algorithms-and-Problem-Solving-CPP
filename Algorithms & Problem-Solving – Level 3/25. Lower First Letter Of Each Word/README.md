# Problem 25 – Level 3: Lower First Letter Of Each Word

## Problem Description
Write a program that reads a string and converts the first letter of each word to lowercase.

The program should handle full sentences and keep all other characters unchanged.

## Solution Idea
- Read the full string using `getline`.
- Loop through each character in the string.
- Use a flag to detect the first letter of each word.
- When the first letter is found, convert it to lowercase.
- Reset the flag when a space is encountered.

## Used Concepts
- Strings
- Loops
- Conditions
- Functions
- Character handling (`tolower`)

## Files
- `Lower First Letter Of Each Word.cpp` – C++ solution
- `README.md` – Problem description and solution overview

## Notes
- The solution works correctly even with multiple spaces.
- Only the first letter of each word is affected.
