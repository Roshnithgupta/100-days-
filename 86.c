/*
Q136 (Enum): Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
*/
#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    char choice[20];
    int a, b;
    scanf("%s %d %d", choice, &a, &b);

    enum Operation op;
    if (strcmp(choice, "ADD") == 0)
        op = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        op = SUBTRACT;
    else
        op = MULTIPLY;

    switch (op) {
        case ADD:      printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }
    return 0;
}