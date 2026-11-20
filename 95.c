/*
Q145 (Enum): Return a structure containing top student's details from a function.
*/
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int topIdx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIdx].marks) {
            topIdx = i;
        }
    }
    return s[topIdx];
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}