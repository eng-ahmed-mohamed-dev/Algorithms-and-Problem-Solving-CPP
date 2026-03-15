# Problem 12 – Level 4: Add Days to Date

## Problem Description
Write a program that reads a full date (day, month, year) from the user, then reads a number of days to add to that date.  
The program should calculate the new date after adding the given number of days and print the result.

## Solution Idea
The solution works in a few steps:

1. Read the full date from the user using a `struct` to store Day, Month, and Year.
2. Convert the current date into its **day order within the year**.
3. Add the required number of days to that order.
4. Starting from month 1, keep subtracting the number of days in each month until the remaining days represent the final day in the correct month.
5. If the month exceeds 12, reset it to January and increment the year.
6. Finally print the resulting date.

Helper functions are used to:
- check if a year is a leap year
- get the number of days in a month
- calculate the day order in the year

## Used Concepts
- Functions
- Structs
- Loops
- Conditional statements
- Arrays
- Date calculations
- Leap year logic

## Files
- `Add Days To Date.cpp` → contains the full solution
- `README.md` → problem explanation

## Notes
The program correctly handles leap years and transitions between months and years when adding large numbers of days.