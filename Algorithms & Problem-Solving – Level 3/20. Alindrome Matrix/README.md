# Problem 20 – Palindrome Matrix (Level 3)

## Problem Description
Write a program to check whether a matrix is a Palindrome matrix or not.

A matrix is considered Palindrome if each row reads the same from left to right and from right to left.

## Solution Idea
The idea is to check each row in the matrix separately.

For every row:
- Compare the first element with the last one.
- Move inward until reaching the middle of the row.
- If any mismatch is found, the matrix is not Palindrome.

If all rows pass the check, then the matrix is Palindrome.

## Used Concepts
- 2D Arrays
- Nested Loops
- Functions
- Random Number Generation
- Boolean Logic

## Files
- `Palindrome Matrix.cpp` : Contains the full solution code.

## Notes
- The matrix size is fixed to 3×3.
- The matrix values are generated randomly for testing.