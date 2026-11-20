/*
 * Day 74 - Q124
 * Take two filenames from the user – a source file and a destination file. 
 * Copy all the content from the source file to the destination file using fgetc() and fputc().
 */
#include <stdio.h>

int main() {
    char srcFile[100], destFile[100];
    FILE *src, *dest;
    char ch;

    printf("Enter source filename: ");
    scanf("%s", srcFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully to %s\n", destFile);

    fclose(src);
    fclose(dest);
    return 0;
}