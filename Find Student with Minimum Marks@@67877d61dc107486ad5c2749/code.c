#include <stdio.h>

// Define the structure for Student
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Input number of students
    scanf("%d", &n);

    struct Student students[n];

    // Input data for the first student and assume they have the minimum marks initially
    scanf("%d %s %f", &students[0].rollNumber, students[0].name, &students[0].marks);
    struct Student minStudent = students[0];

    // Input data for the rest of the students and find the one with the lowest marks
    for (int i = 1; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        if (students[i].marks < minStudent.marks) {
            minStudent = students[i];
        }
    }

    // Output the student with the lowest marks
    printf("Student with Minimum Marks:\n");
    printf("Roll Number: %d,\n", minStudent.rollNumber);
    printf("Name: %s,\n", minStudent.name);
    printf("Marks:\n%.2f\n", minStudent.marks);

    return 0;
}