# Problem 16 – Check Sparse Matrix (Level 3)

## Problem Description
Write a program to check whether a matrix is a sparse matrix or not.

A matrix is considered **sparse** if the number of zero elements is greater than or equal to half of the total number of elements.

## Solution Idea
- Generate a 3x3 matrix with random values between 0 and 10.
- Print the matrix.
- Count how many times the number `0` appears in the matrix.
- Compare the count of zeros with half of the matrix size.
- If zeros are greater than or equal to half, the matrix is sparse.

## Used Concepts
- 2D Arrays
- Functions
- Loops
- Random number generation
- Conditions

## Files
- `Check Sparse Matrix.cpp` — C++ solution
- `README.md` — Problem description and solution overview

## Notes
- Matrix size is fixed to 3x3 as required by the problem.
