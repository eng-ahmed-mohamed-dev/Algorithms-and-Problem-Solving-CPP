# Problem 41 – Reverse Words – Level 3

## Problem Description
Write a program to read a string from the user and reverse its words.

Example:

Input:  
Mohammed Abu-Hadhoud I'm From Jordan  

Output:  
Jordan From I'm Abu-Hadhoud Mohammed

---

## Solution Idea
The program reads a full line from the user using `getline`, then splits the string into words based on spaces and stores them in a `vector`.

After that, it loops through the vector from the end to the beginning and builds a new string with the reversed order of words.

---

## Used Concepts
- getline
- string
- vector
- find and substr
- Iterators
- Functions

---

## Files
- Revers Words.cpp → Contains the solution code.
- README.md → Problem explanation.

---

## Notes
- Empty words are ignored while splitting.
- The final result does not contain an extra space at the end.