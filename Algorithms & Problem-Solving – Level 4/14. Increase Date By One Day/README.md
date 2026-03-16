# Problem 14 – Level 4: Increase Date By One Day

## Problem Description
Write a program that reads a date (day, month, year) from the user, then creates a function that increases the date by one day.

The program should correctly handle:
- End of month
- End of year
- February in leap years

## Solution Idea
The solution checks if the given day is the last day in the current month.

- If it is not the last day, simply increase the day by one.
- If it is the last day:
  - If the month is December, reset the date to `1/1` and increase the year.
  - Otherwise, move to the first day of the next month.

Helper functions are used to determine leap years and the number of days in each month.

## Used Concepts
- Struct
- Functions
- Conditional statements
- Arrays
- Leap year calculation
- Problem decomposition

## Files
- `Increase Date By One Day.cpp` → main solution implementation
- `README.md` → problem explanation

## Notes
The solution handles all edge cases including leap years and transitions between months and years.