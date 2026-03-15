# Problem 12 – Level 4: Date1 Equals To Date2

## Problem Description
Write a program that reads two dates from the user and checks whether the two dates are equal or not.

Each date consists of:
- Day
- Month
- Year

The program should compare the two dates and print whether they are equal.

---

## Solution Idea
A struct is used to represent a date containing three fields: Day, Month, and Year.

The program reads the first date and the second date using a function that collects all date parts.

To determine if the two dates are equal, a function compares:
- the year of both dates
- the month of both dates
- the day of both dates

If all three values match, the dates are considered equal.

---

## Used Concepts
- Structs
- Functions
- User Input
- Conditional Statements
- Logical Comparison

---

## Files
- `Date1 Equals To Date2.cpp` → contains the C++ solution
- `README.md` → explanation of the problem and solution

---

## Notes
The comparison is done by checking the year, month, and day individually.  
If any value is different, the dates are not equal.