# Problem 46 – Level 3  
## Convert Line Data To Record

### Problem Description
Write a program that takes a single line of client data separated by a specific delimiter and converts it into a structured record, then prints the extracted data.

The line format is:

AccountNumber#//#PinCode#//#Name#//#Phone#//#AccountBalance

### Solution Idea
- Store client data inside a struct.
- Split the input line using the delimiter "#//#".
- Assign each part to the corresponding struct field.
- Convert the balance from string to double.
- Print the structured data in a readable format.

### Used Concepts
- struct
- string
- vector
- string splitting
- substr & find
- stod()
- passing struct by const reference

### Files
- Convert Line Data To Record.cpp
- README.md

### Notes
The program assumes that the input line format is correct and contains all required fields.