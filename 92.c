/*
Q142 (Enum): Store details of 5 students in an array of structures and print all.
*/
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10d\n", s[i].name, s[i].roll_no, s[i].marks);
    }
    return 0;
}