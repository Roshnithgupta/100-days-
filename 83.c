/*
Q133 (Enum): Create an enum for months and print how many days each month has.
*/
#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char input[10];
    scanf("%s", input);

    enum Month m = JAN;
    const char *codes[] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    for (int i = 0; i < 12; i++) {
        if (strcmp(input, codes[i]) == 0) {
            m = i;
            break;
        }
    }

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }
    return 0;
}