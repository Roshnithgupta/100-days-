/*
 * Day 73 - Q123
 * Read a text file and count the total number of characters, words, and lines. 
 * A word is defined as a sequence of non-space characters separated by spaces or newlines.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    int in_word = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        chars++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    
    // Add a line if characters exist but no trailing newline
    if (chars > 0) {
        lines++; 
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);

    fclose(file);
    return 0;
}