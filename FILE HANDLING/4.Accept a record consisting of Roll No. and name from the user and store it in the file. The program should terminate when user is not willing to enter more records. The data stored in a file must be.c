#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    int rollNo;
    char name[50];
    char choice;
    fp = fopen("students.csv", "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("Enter student records (Roll No. and Name).\n");
    printf("Data will be saved in 'students.csv' (openable in MS Excel).\n");
    do {
        printf("\nEnter Roll No: ");
        scanf("%d", &rollNo);
        getchar();
        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        fprintf(fp, "%d,%s\n", rollNo, name);
        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    fclose(fp);
    printf("\nRecords saved successfully in 'students.csv'.\n");
    printf("You can now open 'students.csv' directly in MS Excel.\n");
    return 0;
}

