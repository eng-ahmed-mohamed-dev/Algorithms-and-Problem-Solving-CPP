# Problem 40 – Join String (Overloading) – Level 3

## Problem Description
Write a program to join an array of strings into one string using a separator.
The solution should work with both vectors and arrays of strings.

## Solution Idea
The idea is to create two overloaded functions:
- One function joins strings from a `vector<string>`.
- Another function joins strings from a string array.

Each function loops through the elements, appends each word to a result string,
and adds the separator between them.  
At the end, the extra separator is removed.

## Used Concepts
- Functions
- Function Overloading
- `vector<string>`
- Arrays
- Loops
- String manipulation

## Files
- `Join String (Overloading).cpp` → Solution implementation
- `README.md` → Problem description and explanation

## Notes
- The same logic is reused for both vector and array versions.
- The separator can be changed easily using the function parameter.