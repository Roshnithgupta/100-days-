/*
 * Day 68 - Q118
 * Write a program to take an input array of size n. The array should contain all 
 * the integers between 0 to n except for one. Print that missing number.
 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // The sum of first n natural numbers is n * (n + 1) / 2
    int expected_sum = n * (n + 1) / 2;
    int current_sum = 0, val;
    
    // Array contains n elements (from 0 to n, meaning length is n, one is missing)
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        current_sum += val;
    }
    
    printf("%d\n", expected_sum - current_sum);
    return 0;
}