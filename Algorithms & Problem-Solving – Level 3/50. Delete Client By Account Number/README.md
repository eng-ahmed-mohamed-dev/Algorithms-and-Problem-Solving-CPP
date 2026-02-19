# Problem 50 – Level 3  
## Delete Client By Account Number

### Problem Description
Write a program that deletes a client from a file based on the Account Number.

The program should:
- Ask the user to enter an Account Number.
- If found, display the client details.
- Ask for confirmation.
- If confirmed, delete the client from the file.
- If not found, display a proper message.

---

### Solution Idea
1. Load all clients from the file into a vector.
2. Search for the client by Account Number.
3. If found:
   - Display client data.
   - Ask the user for confirmation.
   - Mark the client for deletion.
4. Rewrite the file again without the marked client.
5. Reload the updated data.

Instead of deleting directly from the vector, I used a `MarkForDelete` flag and then rewrote the file excluding marked records.

---

### Used Concepts
- struct
- vector
- File handling (fstream)
- Reading and writing text files
- String splitting
- Searching in vector
- Passing by reference

---

### Files
- `Delete Client By Account Number.cpp`
- `README.md`
- `Clients.txt` (data file)

---

### Notes
- Data in file is separated using `#//#`.
- The program rewrites the whole file after deletion.
- Confirmation is required before deleting any client.