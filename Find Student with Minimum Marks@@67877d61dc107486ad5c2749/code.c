#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];


    scanf("%d %s %f", &students[0].rollNumber, students[0].name, &students[0].marks);
    struct Student minStudent = students[0];

    for (int i = 1; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        if (students[i].marks < minStudent.marks) {
            minStudent = students[i];
        }
    }

    printf("Student with Minimum Marks:\n");
    printf("Roll Number: %d,", minStudent.rollNumber);
    printf("Name: %s,", minStudent.name);
    printf("Marks:\n%.2f", minStudent.marks);

    return 0;
}