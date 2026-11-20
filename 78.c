/*
 * Day 78 - Q128
 * Read a text file and count how many vowels and consonants are in the file. 
 * Ignore digits and special characters.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int vowels = 0, consonants = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            char lower_ch = tolower(ch);
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
                lower_ch == 'o' || lower_ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    fclose(file);
    return 0;
}