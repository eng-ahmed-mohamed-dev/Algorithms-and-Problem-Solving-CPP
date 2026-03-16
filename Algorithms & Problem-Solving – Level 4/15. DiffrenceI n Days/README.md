# Problem 15 – Level 4
## Difference Between Two Dates

### Problem Description
Write a program that reads two dates (Date1 and Date2) and calculates the difference between them in days.

Note: Date1 should be earlier than Date2.

The program should also show the difference including the end day.

---

### Solution Idea
The program reads two full dates from the user.

To calculate the difference in days, the program keeps increasing Date1 day by day until it reaches Date2.

Each time the date increases, the counter of days increases as well.

An optional parameter allows including the end day in the final result.

---

### Used Concepts
- Structs
- Functions
- Date handling
- Leap year calculation
- Loops
- Conditionals

---

### Files
- `DiffrenceInDays.cpp` → Contains the implementation of the solution
- `README.md` → Problem explanation

---

### Notes
The solution increases the date one day at a time to calculate the difference.  
This makes the logic simple and easy to understand.