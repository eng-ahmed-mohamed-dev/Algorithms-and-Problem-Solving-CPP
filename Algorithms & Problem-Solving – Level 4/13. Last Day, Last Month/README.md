# Problem 13 – Level 4  
Check Last Day in Month and Last Month in Year

## Problem Description
Write a program that reads a full date (day, month, year) and checks:

- If the given day is the **last day in its month**
- If the given month is the **last month in the year**

The program must correctly handle different month lengths and leap years.

## Solution Idea
First, the program reads the full date from the user and stores it in a `struct`.

To determine if the day is the last day of the month:
- Calculate the number of days in the given month.
- February is handled separately depending on whether the year is a **leap year**.
- If the entered day equals the total number of days in that month, then it is the last day.

To determine if the month is the last month of the year:
- Simply check if the month equals **12**.

## Used Concepts
- Functions
- Structs
- Arrays
- Conditional statements
- Leap year calculation
- Basic input/output

## Files
- `Last Day, Last Month.cpp` → contains the C++ implementation
- `README.md` → explanation of the problem and solution

## Notes
The program uses a helper function to determine leap years to ensure February is handled correctly.