# Problem 11 – Level 4: Date From Day Order In a Year

## Problem Description
Write a program that calculates the number of days from the beginning of the year based on a given date (day, month, year).

After calculating the day order in the year, convert that number back into its corresponding date.

Example:

Input:
Day = 20  
Month = 9  
Year = 2022  

Output:
Number of days from the beginning of the year = 263  
Date for [263] = 20/9/2022

---

## Solution Idea
The solution works in two main steps:

1. Calculate the **day order in the year** by summing the number of days in all months before the given month, then adding the current day.
2. Convert the **day order back to a date** by subtracting the number of days in each month until reaching the correct month and day.

The program also checks if the year is a **leap year** to correctly handle February.

---

## Used Concepts
- Functions
- Structs
- Arrays
- Loops
- Conditional statements
- Leap year calculation
- Date manipulation

---

## Files
- `Date From Day Order In a Year.cpp` → Contains the full C++ implementation.
- `README.md` → Problem explanation and solution idea.

---

## Notes
The program uses a struct (`sDate`) to store the final calculated date after converting the day order back to day, month, and year.