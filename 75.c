/*
 * Day 75 - Q125
 * Open an existing file in append mode and allow the user to enter a new line 
 * of text. Append the text at the end without overwriting existing content.
 */
#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char newText[256];
    printf("Enter text to append: ");
    scanf(" %[^\n]s", newText);

    fprintf(file, "\n%s", newText);
    
    printf("File updated successfully with appended text.\n");

    fclose(file);
    return 0;
}