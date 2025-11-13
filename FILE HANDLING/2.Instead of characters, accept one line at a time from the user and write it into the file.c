#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];
    printf("Enter the file name to write: ");
    scanf("%s", filename);
    getchar();
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }
    printf("Enter text (type 'END' on a new line to stop):\n");
    while (1) {
        gets(line);
        if (strcmp(line, "END") == 0)
            break;
        fputs(line, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    printf("Data written to file '%s' successfully.\n", filename);
    return 0;
}

