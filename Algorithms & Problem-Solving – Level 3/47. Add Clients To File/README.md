# Problem 47 – Level 3: Add Clients To File

## Problem Description
Write a program that allows the user to enter client information and save it into a text file.  
Each client record should include account number, pin code, name, phone number, and account balance.

The program should allow adding multiple clients in one run.

## Solution Idea
The program defines a structure to store client data.  
It reads client information from the user, converts it into a formatted string using a separator, and appends it to a text file.

A loop is used to keep adding clients until the user chooses to stop.

## Used Concepts
- Structs
- Functions
- File handling (fstream)
- Strings
- Loops
- Basic input/output

## Files
- `Add Clients To File.cpp` → main solution file
- `Clients.txt` → file used to store client records

## Notes
Client records are stored in a single line format using a custom separator.