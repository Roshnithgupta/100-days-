/*
Q144 (Enum): Write a function that accepts a structure as parameter and prints its members.
*/
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;
    scanf("%s %d %d", s.name, &s.roll_no, &s.marks);

    printStudent(s);
    return 0;
}