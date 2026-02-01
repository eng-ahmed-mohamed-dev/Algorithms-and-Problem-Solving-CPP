# Problem 23 – Level 3  
Print First Letter of Each Word

## Problem Description
Write a program that reads a string from the user, then prints the first letter of each word in that string.

Each first letter should be printed on a new line.

## Solution Idea
- Read the full string using `getline`
- Use a boolean flag to detect the beginning of each word
- A character is considered the first letter if:
  - It is not a space
  - It comes after a space or at the beginning of the string
- Print the detected characters line by line

## Used Concepts
- Strings
- Loops
- Conditional statements
- Boolean flags
- `getline` for full string input

## Files
- `Print First Letter of Each Word.cpp`
- `README.md`

## Notes
- The program works correctly even if the string contains symbols or multiple spaces.