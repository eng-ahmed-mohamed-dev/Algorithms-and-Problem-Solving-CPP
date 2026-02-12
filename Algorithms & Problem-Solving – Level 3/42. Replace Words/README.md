# Problem 42 – Level 3: Replace Words in String

## Problem Description
Write a C++ program that replaces all occurrences of a specific word inside a string with another word.

The program should take an original string and replace a given word everywhere it appears.

## Solution Idea
The solution uses C++ built-in string functions.

First, the program searches for the target word using `find()`.  
If the word is found, it replaces it using `replace()`.  
This process repeats inside a loop until no more occurrences are found.

## Used Concepts
- Strings in C++
- Built-in string functions (`find`, `replace`)
- Loops
- Functions

## Files
- `Replace Words.cpp` → contains the C++ solution

## Notes
The program replaces all occurrences of the target word, not just the first one.