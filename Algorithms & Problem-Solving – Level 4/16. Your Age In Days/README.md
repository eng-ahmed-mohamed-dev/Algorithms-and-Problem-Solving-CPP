# Problem 16 – Level 4: Your Age In Days

## Problem Description
Write a program that asks the user for their date of birth, then calculates their age in days compared to the current system date.

## Solution Idea
The idea is to represent dates using a struct, then calculate the difference by increasing the birth date day by day until reaching the current date.

To make this work:
- Check for leap years
- Get the correct number of days in each month
- Move to the next day properly (handling end of month and year)

## Used Concepts
- Struct (to represent Date)
- Functions
- Loops
- Conditional statements
- Date handling logic
- Leap year calculation
- System time using `<ctime>`

## Files
- `Your Age In Days.cpp` → contains the solution code
- `README.md` → problem explanation

## Notes
- The solution increases the date one day at a time, so it's simple and easy to understand.
- This approach is not the fastest, but it's good for practicing date logic.