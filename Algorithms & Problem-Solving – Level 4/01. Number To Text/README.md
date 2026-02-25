## Problem 1 – Level 4: Number To Text

### Problem Description
Write a program to read an integer number and print the text representation of that number in English.

Example:
5843 → Five Thousand Eight Hundred Forty Three

---

### Solution Idea
The number is divided into parts (units, tens, hundreds, thousands, millions, billions).  
A recursive function is used to convert each part separately, then combine the results to form the final text.

---

### Used Concepts
- Functions
- Recursion
- Arrays
- Integer division and remainder
- Problem decomposition

---

### Files
- `Number To Text.cpp` → main solution file
- `README.md` → problem documentation

---

### Notes
- The solution supports large numbers up to billions.
- The function uses recursion to simplify the conversion process.