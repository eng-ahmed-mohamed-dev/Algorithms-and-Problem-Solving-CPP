# Problem 3 – Level 4  
## Number of Days–Hours–Minutes–Seconds in a Year

### Problem Description
Write a program that asks the user to enter a year, then prints:

- Number of Days
- Number of Hours
- Number of Minutes
- Number of Seconds

in that specific year.

The program must correctly handle leap years.

---

### Solution Idea
1. Read the year from the user.
2. Check if the year is a leap year:
   - Divisible by 400  
   - OR divisible by 4 and not divisible by 100
3. If leap → 366 days  
   Otherwise → 365 days
4. Calculate:
   - Hours = Days × 24  
   - Minutes = Hours × 60  
   - Seconds = Minutes × 60  

Each calculation is separated into its own function for better organization.

---

### Used Concepts
- Functions
- Boolean logic
- Conditional (ternary) operator
- Modular arithmetic (%)
- Basic arithmetic operations
- User input / output

---

### Files
- `Number of Days-Hours-Minutes-Seconds In a Year.cpp`
- `README.md`

---

### Notes
The program uses `short` for the year and days, and `int` for minutes and seconds to avoid overflow.