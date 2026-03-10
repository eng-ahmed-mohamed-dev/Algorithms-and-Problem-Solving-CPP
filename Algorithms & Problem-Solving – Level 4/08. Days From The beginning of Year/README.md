# Problem 8 – Level 4: Days From the Beginning of Year

## Problem Description
Write a program that calculates how many days have passed from the beginning of the year until a given date.

The program asks the user to enter:
- Day
- Month
- Year

Then it prints the total number of days from January 1st up to that date.

## Solution Idea
The idea is simple:

1. Determine the number of days in each month.
2. Handle leap years when calculating February.
3. Add the days of all months before the given month.
4. Finally add the days of the current month.

This gives the total number of days from the start of the year.

## Used Concepts
- Functions
- Loops
- Arrays
- Conditional statements
- Leap year calculation

## Files
- `Days From The beginning of Year.cpp` → C++ implementation of the solution
- `README.md` → problem explanation

## Notes
The program also correctly handles leap years when calculating the days of February.