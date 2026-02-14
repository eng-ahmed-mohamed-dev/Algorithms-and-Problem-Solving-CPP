# Problem 45 – Level 3  
## Convert Record To Line

### Problem Description
Write a program to read bank client data (Account Number, PinCode, Name, Phone, and Account Balance)  
and convert this data into a single line separated by a specific delimiter.

The output should be formatted in a way that makes it ready to be saved into a file.

---

### Solution Idea
- Create a struct to store client data.
- Read client information from the user.
- Concatenate all fields into one string.
- Separate each field using a delimiter `#//#`.
- Return the final formatted line.

---

### Used Concepts
- Struct
- Functions
- Strings
- getline()
- Default function parameters
- to_string()

---

### Files
- `Convert Record To Line.cpp`
- `README.md`

---

### Notes
- The account balance is converted to string using `to_string()`, so it may appear with decimal places.
- The separator can be changed easily if needed.