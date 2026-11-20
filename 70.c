/*
 * Day 70 - Q120
 * Write a program to take a string input. Change it to sentence case.
 * (Note: Based on the sample output provided in the question, the required 
 * output format capitalizes the first letter of EVERY word, which is Title Case).
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int newWord = 1; // Flag to check if we are at the start of a word
        
        for (int i = 0; str[i] != '\0'; i++) {
            if (isspace(str[i])) {
                newWord = 1;
            } else if (newWord) {
                str[i] = toupper(str[i]);
                newWord = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        }
        
        printf("%s", str);
    }
    return 0;
}