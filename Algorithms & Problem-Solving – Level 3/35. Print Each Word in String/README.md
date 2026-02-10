# Problem 35 – Print Each Word in String (Level 3)

## Problem Description
Write a program that reads a string from the user, then prints each word in that string on a separate line.

## Solution Idea
- Read the full string using `getline`.
- Use a space `" "` as a delimiter.
- Loop through the string and extract each word using `find` and `substr`.
- Print each word separately.
- After the loop, print the remaining part of the string if it exists.

## Used Concepts
- Strings
- `getline`
- String functions (`find`, `substr`, `erase`)
- Loops
- Functions

## Files
- `Print Each Word in String.cpp`
- `README.md`

## Notes
- Empty words caused by extra spaces are ignored.
- The solution prints each word on a new line.
