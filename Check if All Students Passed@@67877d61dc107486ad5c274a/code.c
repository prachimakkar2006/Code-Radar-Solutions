#include <stdio.h>

// Define the structure for Student
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    int allPassed = 1; // Assume all students passed initially

    // Input number of students
    scanf("%d", &n);

    struct Student students[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        if (students[i].marks <= 50) {
            allPassed = 0; // If any student has <= 50 marks, set allPassed to 0
        }
    }

    // Output result based on allPassed flag
    if (allPassed) {
        printf("All Passed\n");
    } else {
        printf("Not All Passed\n");
    }

    return 0;
}