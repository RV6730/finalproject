/*
 * Question 1: Student Marks Record (Insertion Operation)
 * 
 * Program to maintain marks of 5 students and insert a new student's mark
 * at a given position in the array.
 */

#include <stdio.h>

#define INITIAL_SIZE 5
#define MAX_SIZE 10

void takeMarks(int marks[], int size);
void insertMark(int marks[], int *size, int mark, int position);
void displayMarks(int marks[], int size);

int main() {
    int marks[MAX_SIZE];
    int size = INITIAL_SIZE;
    int newMark, position;
    
    printf("=== Student Marks Record System ===\n\n");
    
    // Step 1: Take marks of 5 students
    printf("Enter marks for %d students:\n", INITIAL_SIZE);
    takeMarks(marks, size);
    
    printf("\nOriginal marks list:\n");
    displayMarks(marks, size);
    
    // Step 2: Insert one new mark at a given position
    printf("\nEnter the mark of the new student: ");
    scanf("%d", &newMark);
    
    printf("Enter the position to insert (1 to %d): ", size + 1);
    scanf("%d", &position);
    
    // Validate position
    if (position < 1 || position > size + 1) {
        printf("Invalid position! Position should be between 1 and %d.\n", size + 1);
        return 1;
    }
    
    insertMark(marks, &size, newMark, position);
    
    // Step 3: Display the updated marks list
    printf("\nUpdated marks list after insertion:\n");
    displayMarks(marks, size);
    
    return 0;
}

/*
 * Function to take marks input from user
 * Parameters:
 *   marks[] - array to store marks
 *   size - number of marks to input
 */
void takeMarks(int marks[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

/*
 * Function to insert a new mark at given position
 * Parameters:
 *   marks[] - array containing marks
 *   size - pointer to current size of array
 *   mark - new mark to be inserted
 *   position - position where mark should be inserted (1-based indexing)
 */
void insertMark(int marks[], int *size, int mark, int position) {
    // Shift elements to the right from the insertion position
    for (int i = *size; i >= position; i--) {
        marks[i] = marks[i - 1];
    }
    
    // Insert the new mark at the specified position (convert to 0-based index)
    marks[position - 1] = mark;
    
    // Increment the size
    (*size)++;
    
    printf("\nMark %d inserted successfully at position %d.\n", mark, position);
}

/*
 * Function to display all marks
 * Parameters:
 *   marks[] - array containing marks
 *   size - number of elements to display
 */
void displayMarks(int marks[], int size) {
    printf("Total students: %d\n", size);
    printf("Marks: ");
    for (int i = 0; i < size; i++) {
        printf("%d", marks[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}
