# Question 1: Student Marks Record (Insertion Operation)

## Problem Description
A teacher wants to maintain a record of marks of 5 students. Later, one new student joins the class, and the teacher needs to insert that student's marks in the correct position of the array.

## Features
1. Takes marks of 5 students
2. Inserts one new mark at a given position
3. Displays the updated marks list

## How to Compile
```bash
gcc -Wall -Wextra -o question1 question1.c
```

## How to Run
```bash
./question1
```

## Usage Example
```
=== Student Marks Record System ===

Enter marks for 5 students:
Student 1: 85
Student 2: 90
Student 3: 78
Student 4: 92
Student 5: 88

Original marks list:
Total students: 5
Marks: 85, 90, 78, 92, 88

Enter the mark of the new student: 95
Enter the position to insert (1 to 6): 3

Mark 95 inserted successfully at position 3.

Updated marks list after insertion:
Total students: 6
Marks: 85, 90, 95, 78, 92, 88
```

## Implementation Details
- **Array Size**: Initially 5 students, can accommodate up to 10 students (MAX_SIZE)
- **Position**: Uses 1-based indexing for user input (position 1 to 6)
- **Validation**: Checks if the insertion position is valid
- **Algorithm**: Shifts elements to the right from insertion position before inserting the new mark

## Functions
- `takeMarks()`: Takes marks input from user
- `insertMark()`: Inserts a new mark at specified position
- `displayMarks()`: Displays all marks in the array
