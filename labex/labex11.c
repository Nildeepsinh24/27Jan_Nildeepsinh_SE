#include <stdio.h>

#define NUM_STUDENTS 3  // Defining the number of students

// Define a structure to store a student's details
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    struct Student students[NUM_STUDENTS];  // Array of structures to store 3 students

    // Input details for each student
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);

        // Input student's name
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';  // Remove the newline character

        // Input roll number
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);

        // Input marks
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        getchar();  // To consume the newline character left by scanf()
    }

    // Print details of all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
