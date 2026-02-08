# Problem 32 – Level 3: Is Vowel

## Problem Description
Write a program that reads a character from the user and checks whether it is a vowel or not.  
The vowels are: **a, e, i, o, u**.

## Solution Idea
The program reads a character from the user, converts it to lowercase to handle both uppercase and lowercase inputs, then compares it with the vowel letters. If it matches any of them, it is considered a vowel.

## Used Concepts
- Functions
- Conditional statements
- Character handling
- `tolower()` from `<cctype>`

## Files
- `Is Vowel.cpp` → contains the solution implementation

## Notes
The check is case-insensitive, so uppercase and lowercase letters are handled correctly.