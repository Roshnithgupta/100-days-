/*
 * Day 69 - Q119
 * Write a program to take an integer array as input. Only one element will be repeated. 
 * Print the repeated element. Try to find the result in one single iteration.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Using a boolean/frequency array to achieve single iteration finding
    // We assume elements are within a reasonable bound for this simple approach
    int* visited = (int*)calloc(100000, sizeof(int)); 
    int repeated = -1;
    
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        if (visited[val] == 1 && repeated == -1) {
            repeated = val; 
        }
        visited[val] = 1;
    }
    
    printf("%d\n", repeated);
    free(visited);
    return 0;
}
