#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, threshmarks;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    scanf("%d", &threshmarks);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].marks > threshmarks) {
            printf("Count of student scoring above %d: %d",threshmarks,i);
            found = 1;
            break;
        }
    }

    if (!found) {
         printf("Count of student scoring above %d: 0",threshmarks);
    }

    return 0;
}