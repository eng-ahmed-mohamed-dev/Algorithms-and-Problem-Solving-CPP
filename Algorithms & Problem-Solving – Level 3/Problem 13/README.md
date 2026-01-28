# Problem 13 – Identity Matrix Check (Level 3)

## Problem Description
Write a program to check whether a given matrix is an identity matrix or not.

An identity matrix must:
- Be a square matrix.
- Have all diagonal elements equal to 1.
- Have all non-diagonal elements equal to 0.

The program generates a 3x3 matrix, prints it, then checks if it is an identity matrix.

## Solution Idea
- Generate a 3x3 matrix with random values.
- Print the matrix in a clear format.
- Check if the matrix is square.
- Loop through all elements:
  - If the element is on the main diagonal, it must be 1.
  - If the element is not on the main diagonal, it must be 0.
- If any condition fails, the matrix is not identity.

## Used Concepts
- Two-dimensional arrays
- Nested loops
- Functions
- Random number generation
- Conditional statements

## Files
- `Check Identity Matrix.cpp` : C++ source code for the solution
- `README.md` : Problem description and solution explanation

## Notes
- Because the matrix values are random, it is unlikely to get an identity matrix.
- The same logic can be applied to any square matrix size.
