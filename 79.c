/*
Q129 (File Handling): A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/
#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening numbers.txt!\n");
        return 1;
    }

    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);
    double avg = (count > 0) ? (double)sum / count : 0.0;
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}