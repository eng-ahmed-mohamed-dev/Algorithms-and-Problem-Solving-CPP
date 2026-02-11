# Problem 38 – Level 3: Trim Left, Trim Right, Trim

## Problem Description
Write a program that reads a string from the user, then removes spaces from:
- the left side of the string
- the right side of the string
- both sides of the string

The program prints the original string and the trimmed results.

## Solution Idea
The solution uses three functions:

- `TrimLeft`: scans the string from the beginning until it finds the first non-space character, then returns the remaining substring.
- `TrimRight`: scans the string from the end until it finds the first non-space character, then returns the substring before trailing spaces.
- `Trim`: combines both functions to remove spaces from both sides.

The program reads input using `getline` to support spaces inside the string.

## Used Concepts
- Strings and string manipulation
- Functions
- Loops
- `substr` method
- User input with `getline`

## Files
- `TrimLeft, TrimRight, Trim.cpp` → main solution file

## Notes
This implementation focuses on trimming space characters from both sides of a string using basic string operations.