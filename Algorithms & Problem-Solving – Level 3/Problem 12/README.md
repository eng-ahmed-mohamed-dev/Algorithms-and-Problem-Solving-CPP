# Problem 12 – Level 3  
## Compare Two Matrices (Typical Matrices)

### Problem Description
Write a program to compare two matrices and check if they are typical or not.  
Two matrices are considered **typical** if all corresponding elements in both matrices are equal.

---

### Solution Idea
The program does the following:

1. Generates two 3×3 matrices filled with random numbers from 1 to 10.
2. Prints both matrices to the screen.
3. Compares the matrices element by element.
4. If all elements are equal → the matrices are **Typical**.  
   Otherwise → they are **NOT Typical**.

The comparison stops immediately once a mismatch is found.

---

### Used Concepts
- 2D Arrays  
- Nested Loops  
- Functions  
- Random Number Generation  
- Matrix Traversal  

---

### Files
- `Check Typical Matrices.cpp` → Contains the full solution code  
- `README.md` → Problem explanation and solution overview  

---

### Notes
Since the matrices are filled with random values, most of the time the result will be **NOT Typical** unless both matrices randomly get the exact same values.
