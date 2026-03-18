## Problem 17 – Level 4

### Problem Description
Write a program to read two dates and calculate the difference between them in days.

If the second date is earlier than the first date, the result should be negative.

Also calculate the difference including the end day.

---

### Solution Idea
- Create a struct to represent a date (day, month, year).
- Read two full dates from the user.
- Compare the two dates:
  - If Date1 is after Date2, swap them and remember that the result should be negative.
- Loop from Date1 to Date2:
  - Increase the date one day at a time.
  - Count how many days passed.
- Return the result:
  - Multiply by -1 if dates were swapped.
  - Add 1 if including the end day is required.

---

### Used Concepts
- Struct
- Functions
- Loops (while)
- Date manipulation
- Leap year check
- Arrays

---

### Files
- `Diff In Days (Negative Days).cpp` → solution code
- `README.md` → problem explanation

---

### Notes
- The solution handles leap years correctly.
- Works for both positive and negative differences.
- Including end day is optional using a parameter.