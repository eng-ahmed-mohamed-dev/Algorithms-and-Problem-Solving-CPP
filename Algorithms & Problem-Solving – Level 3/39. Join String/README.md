# Problem 39 – Level 3  
## Join Vector of Strings

### Problem Description
Write a program to join a vector of strings into one single string using a specific separator.

The program should:
1. Read a string from the user.
2. Split the string into words.
3. Join the words again using a chosen delimiter.

---

### Solution Idea
- First, read the full line using `getline`.
- Split the string into words using a custom `SplitString` function.
- Store the words inside a `vector<string>`.
- Use a `JoinString` function to concatenate all elements using a delimiter.
- Remove the extra delimiter added at the end.

---

### Used Concepts
- `string`
- `vector`
- `getline`
- `find`
- `substr`
- `erase`
- Looping with range-based for loop

---

### Files
- `Join String.cpp` → Contains the full solution.
- `README.md` → Problem explanation.

---

### Notes
- The join function removes the last delimiter to avoid having an extra separator at the end.
- The delimiter can be changed easily when calling the `JoinString` function.