# Problem 9 – Level 4  
## Print Year Calendar

### Problem Description
Write a program that asks the user to enter a year, then prints the full calendar for that year month by month.

Each month should display the days of the week and the correct dates aligned under them.

### Solution Idea
The program starts by reading the year from the user.

To build the calendar correctly:
- First determine if the year is a leap year.
- Calculate the number of days in each month.
- Find the day of the week for the first day of every month.
- Print the days in a calendar format aligned with the correct weekday.

The program loops through all 12 months and prints the calendar for each one.

### Used Concepts
- Functions
- Arrays
- Conditional statements
- Loops
- Basic date calculations
- Formatting output

### Files
- `Year Calendar.cpp` – contains the full implementation of the solution.

### Notes
The program calculates the weekday of the first day in each month using a mathematical formula, which allows printing the calendar correctly without relying on external libraries.