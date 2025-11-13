#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];
    printf("Enter the file name to read: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }
    printf("\n--- File Content ---\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    printf("\n\nEnd of file reached.\n");
    return 0;
}

