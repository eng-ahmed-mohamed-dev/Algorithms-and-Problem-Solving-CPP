# Problem 31 – Count Letters Match Case (Level 3)

## Problem Description
Write a program to read a string and a character, then count how many times the character appears in the string.
The program should count:
- Once with case sensitivity (Match Case)
- Once without case sensitivity (Ignore Case)

## Solution Idea
- Read the full string from the user.
- Read a single character.
- Count how many times the character appears in the string.
- First count considers exact case.
- Second count ignores case by converting characters to lowercase before comparison.

## Used Concepts
- Functions
- String handling
- Loops
- Character case handling (`toupper`, `tolower`)
- Default function parameters

## Files
- `Count Letters Match Case.cpp` → C++ solution file
- `README.md` → Problem description and solution overview

## Notes
- The solution prints both results: with matching case and without matching case.
- Code is written in a simple and readable way for learning purposes.