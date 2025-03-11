#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    float threshmarks;
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    scanf("%.2f", &threshmarks);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].marks > threshmarks) {
            printf("Count of student scoring above %.2f: %d",threshmarks,i);
        }
        else{
            printf("Count of student scoring above %.2f: %d",threshmarks);
        }
    }


    return 0;
}