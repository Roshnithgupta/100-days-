/*
Q143 (Enum): Find and print the student with the highest marks.
*/
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];
    int topperIdx = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
        if (s[i].marks > s[topperIdx].marks) {
            topperIdx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[topperIdx].name, s[topperIdx].marks);
    return 0;
}