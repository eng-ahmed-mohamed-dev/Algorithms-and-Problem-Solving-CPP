# Problem 37 – Level 3  
## Split String

### Problem Description
Write a program that reads a string from the user, then splits each word into a vector and prints the result.

### Solution Idea
- Read a full string using `getline`.
- Create a function that splits the string using a delimiter.
- Extract each word and store it in a vector.
- Ignore empty words caused by extra spaces.
- Print the number of tokens and each word on a separate line.

### Used Concepts
- Strings
- Vectors
- Functions
- `find`, `substr`, `erase`
- Loops

### Files
- `Split String.cpp`
- `README.md`

### Notes
- The function supports multiple spaces between words.
- Empty tokens are ignored.
