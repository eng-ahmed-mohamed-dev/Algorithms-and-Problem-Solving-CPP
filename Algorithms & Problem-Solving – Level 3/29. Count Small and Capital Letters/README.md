# Problem 29 – Level 3  
## Count Small and Capital Letters

### Problem Description
Write a program that reads a full string from the user, then counts:
- The total number of characters in the string
- The number of capital (uppercase) letters
- The number of small (lowercase) letters

---

### Solution Idea
The program reads a full line using `getline`, then iterates through each character in the string.  
It checks whether a character is uppercase or lowercase using functions from the `<cctype>` library.

Two approaches are implemented:
1. Separate functions to count capital and small letters.
2. A general function that uses an `enum` to specify which type of letters should be counted.

---

### Used Concepts
- Strings in C++
- `getline` for full-line input
- Loops
- Functions
- Enums
- `<cctype>` functions (`isupper`, `islower`)
- String length

---

### Files
- `Count Small and Capital Letters.cpp` – Contains the full solution code  
- `README.md` – Problem explanation and solution overview  

---

### Notes
- Spaces, numbers, and symbols are not counted as capital or small letters.
- The problem is solved using two different methods for practice and better understanding of enums and reusable functions.