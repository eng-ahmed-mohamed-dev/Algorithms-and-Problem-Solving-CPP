# Problem 14 – Level 3  
## Check if a Matrix is Scalar

### Problem Description
Write a program that generates a 3×3 matrix with random numbers, prints it, and checks whether it is a **Scalar Matrix** or not.

A scalar matrix is a special type of square matrix where:
- All elements outside the main diagonal are **zero**
- All elements on the main diagonal are **equal**

---

### Solution Idea
The program fills a 3×3 matrix with random values, then checks two main conditions:

1. Every element outside the main diagonal must be **0**
2. Every element on the main diagonal must be equal to the first diagonal element

If both conditions are satisfied, the matrix is scalar. Otherwise, it is not.

---

### Used Concepts
- 2D Arrays  
- Nested Loops  
- Functions  
- Random Number Generation  
- Matrix Diagonal Checking  

---

### Files
- `Check Scalar Matrix.cpp` → Contains the full C++ solution  
- `README.md` → Problem explanation and solution overview  

---

### Notes
Because the matrix is filled with random numbers, most runs will result in a matrix that is **not scalar**. You can modify the matrix manually to test a scalar case.
