# Problem 48 – Level 3: Show All Clients

## Problem Description
Write a program that reads clients data from a file and displays all clients on the screen in a formatted table.  
Each client record includes account number, pin code, name, phone, and balance.

## Solution Idea
The program reads the clients file line by line, splits each line into fields using a custom separator, and converts it into a client record stored in a struct.  
All client records are stored in a vector, then printed in a clean table format using formatted output.

## Used Concepts
- Structs
- Vectors
- File handling (fstream)
- String splitting
- Functions
- Formatted output (iomanip)

## Files
- `Show All Clients.cpp` — contains the full solution
- `README.md` — problem explanation

## Notes
The program expects a text file named `Clients.txt` in the same directory as the executable.