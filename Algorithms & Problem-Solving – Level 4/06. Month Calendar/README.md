# Problem 8 – Level 4: Month Calendar

## Problem Description

Write a program that asks the user to enter a **year** and a **month**, then prints the calendar for that specific month in a formatted way.

The calendar should display:
- Month name
- Days of the week
- All days of the month aligned correctly based on the starting weekday.

## Solution Idea

The program first reads the year and the month from the user.

Then it determines:
- If the year is a **leap year**
- The **number of days in the given month**
- The **day of the week** for the first day of that month

Using this information, the program prints the calendar while keeping the correct spacing for each day so that the output matches the real calendar layout.

## Used Concepts

- Functions
- Arrays
- Conditional statements
- Loops
- Basic date calculations
- Formatting output

## Files

- `Month Calendar.cpp` → Contains the C++ implementation of the solution.
- `README.md` → Problem explanation and solution overview.

## Notes

The program calculates the starting weekday of the month using a mathematical formula, then prints the calendar based on that result.