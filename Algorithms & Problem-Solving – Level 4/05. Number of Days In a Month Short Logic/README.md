# Problem 5 – Level 4  
Number of Days in a Month (Short Logic)

## Problem Description
Write a program to print the number of days in a given month of a specific year.

The program should:
- Take year and month as input.
- Handle leap years correctly.
- Return 0 if the month number is invalid.

## Solution Idea
Instead of using multiple conditions, I used:
- An array that stores the default number of days for each month.
- A simple check for February to handle leap years.
- A ternary operator to keep the logic short and clean.

This reduces the solution to a very compact and readable implementation.

## Used Concepts
- Functions
- Arrays
- Conditional statements
- Ternary operator
- Leap year logic
- Input validation

## Files
- `Number of Days in a Month Short Logic.cpp`
- `README.md`

## Notes
February is handled separately to correctly account for leap years.
If the month number is less than 1 or greater than 12, the function returns 0.