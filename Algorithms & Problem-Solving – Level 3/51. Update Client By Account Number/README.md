# Problem 51 – Level 3  
## Update Client By Account Number

### Problem Description
Write a program that allows updating a client’s information using the Account Number.  
If the account exists, display the client details and ask for confirmation before updating.  
If the account does not exist, display a "Not Found" message.

The data is stored in a text file named `Clients.txt`.

---

### Solution Idea
1. Load all clients from the file into a vector.
2. Ask the user to enter the Account Number.
3. Search for the client in the vector.
4. If found:
   - Display client details.
   - Ask for confirmation.
   - Read new data from the user.
   - Update the record inside the vector.
   - Rewrite all data back to the file.
5. If not found:
   - Display a message that the client does not exist.

---

### Used Concepts
- Struct
- Vector
- File Handling (fstream)
- String Manipulation
- Functions
- Searching inside vector
- Data conversion (string to double)

---

### Files
- `Update Client By Account Number.cpp`
- `README.md`

---

### Notes
- The program rewrites the entire file after updating a record.
- Account Number is used as a unique identifier.
- Data in the file is separated using `#//#`.