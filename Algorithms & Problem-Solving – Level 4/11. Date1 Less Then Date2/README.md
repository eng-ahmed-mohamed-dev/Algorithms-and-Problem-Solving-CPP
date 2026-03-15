# Problem 11 – Level 4  
## Date1 Less Than Date2

### Problem Description
Write a program that reads two dates from the user and checks if the first date is less than the second date.

Each date consists of:
- Day
- Month
- Year

The program should print whether Date1 is earlier than Date2 or not.

---

### Solution Idea
Two dates can be compared by checking their components in order:

1. Compare the **year** first.
2. If both years are equal, compare the **month**.
3. If the months are also equal, compare the **day**.

If any earlier component is smaller in Date1, then Date1 is considered earlier than Date2.

The comparison logic is implemented inside the function:

`IsDate1BeforeDate2`

---

### Used Concepts
- Structs
- Functions
- Nested ternary operator
- User input
- Basic comparison logic

---

### Files
- `Date1 Less Then Date2.cpp` → C++ solution
- `README.md` → Problem explanation

---

### Notes
This problem focuses on practicing structured data using `struct` and applying conditional comparison between multiple values.