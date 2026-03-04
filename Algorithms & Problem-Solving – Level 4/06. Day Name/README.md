# Problem 7 – Level 4  
## Day Name

### Problem Description
Write a program to read a full date (year, month, day) from the user and print the name of the day of the week.

### Solution Idea
The program reads the year, month, and day separately.

To determine the day of the week, I used a known mathematical formula that calculates the day order (from 0 to 6) based on the given date.

Then, I stored the names of the days in an array and returned the correct name using the calculated order.

### Used Concepts
- Functions
- Arithmetic operations
- Arrays
- Modular operator (%)
- Basic input/output

### Files
- `Day Name.cpp` → Contains the full solution code.
- `README.md` → Problem explanation.

### Notes
The day order starts from:
0 = Sunday  
1 = Monday  
2 = Tuesday  
3 = Wednesday  
4 = Thursday  
5 = Friday  
6 = Saturday  