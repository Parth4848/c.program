#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int lines = 0, words = 0, characters = 0, spaces = 0;
    int inWord = 0;
    printf("Enter the file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n')
            lines++;
        if (ch == ' ')
            spaces++;
        if (isspace(ch) || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);
    printf("\n--- File Statistics ---\n");
    printf("Characters : %d\n", characters);
    printf("Words      : %d\n", words);
    printf("Spaces     : %d\n", spaces);
    printf("Lines      : %d\n", lines);

    return 0;
}
