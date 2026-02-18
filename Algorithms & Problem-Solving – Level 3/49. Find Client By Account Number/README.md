# Problem 49 – Level 3  
Find Client By Account Number

## Problem Description
Write a program that searches for a client in a file using the Account Number and prints the client details if found.  
If the account number does not exist, the program should display a "Not Found" message.

The client data is stored in a text file, and each line represents one client record separated by a specific delimiter.

## Solution Idea
- Read all client records from `Clients.txt`.
- Split each line using the delimiter `#//#`.
- Convert each line into a `struct` object.
- Store all clients in a vector.
- Ask the user to enter an Account Number.
- Search for the client in the vector.
- If found, print the client details.
- Otherwise, print a message that the client was not found.

## Used Concepts
- Struct
- Vector
- File Handling (fstream)
- String Manipulation
- Splitting Strings
- Passing by Reference
- Functions

## Files
- `Find Client By Account Number.cpp`
- `README.md`

## Notes
- The program depends on the existence of `Clients.txt`.
- Records must follow the format separated by `#//#`.
- Search is case-sensitive.