# Problem 4 – Level 4  
## Number of Days, Hours, Minutes, and Seconds in a Month

### Problem Description
Write a program that asks the user to enter a year and a month number, then prints:

- Number of Days in that month  
- Number of Hours  
- Number of Minutes  
- Number of Seconds  

The program must correctly handle leap years when the month is February.

---

### Solution Idea
The program works as follows:

1. Read the year and month from the user.
2. Check if the year is a leap year.
3. Determine the number of days in the given month:
   - February depends on leap year.
   - Some months have 31 days.
   - The remaining months have 30 days.
4. Convert days into:
   - Hours (Days × 24)
   - Minutes (Hours × 60)
   - Seconds (Minutes × 60)

Each calculation is separated into its own function for better organization.

---

### Used Concepts
- Functions
- Conditional Statements
- Logical Operators
- Arrays
- Modulus Operator
- Basic Date Calculations

---

### Files
- `Number of Days-Hours-Minutes-Seconds In a Month.cpp` → Main solution file  
- `README.md` → Problem explanation  

---

### Notes
- The program validates the month range (1–12).
- Leap year logic:
  - Divisible by 400 → Leap year  
  - Divisible by 4 and not by 100 → Leap year  