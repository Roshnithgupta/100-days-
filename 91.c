/*
Q141 (Enum): Define a structure Student with name, roll_no, and marks, then read and print one student's data.
*/
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    scanf("%s %d %d", s.name, &s.roll_no, &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    return 0;
}