#include <stdio.h>
#include <string.h>
struct Student {
    int rollNumber;
    char name[50];
    char courseName[50];
    char major[50];
    char minor[50];
};
void printAllStudentNames(struct Student students[], int n) {
    printf("\nList of all student names:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, students[i].name);
    }
}
void printStudentData(struct Student students[], int n, int rollNumber) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("\nDetails of student with Roll Number %d:\n", rollNumber);
            printf("Name        : %s\n", students[i].name);
            printf("Course Name : %s\n", students[i].courseName);
            printf("Major       : %s\n", students[i].major);
            printf("Minor       : %s\n", students[i].minor);
            return;
        }
    }
    printf("\nNo student found with Roll Number %d.\n", rollNumber);
}
int main() {
    struct Student students[10];
    int n = 10;
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        getchar();
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Course Name: ");
        fgets(students[i].courseName, sizeof(students[i].courseName), stdin);
        students[i].courseName[strcspn(students[i].courseName, "\n")] = '\0';
        printf("Major Subject: ");
        fgets(students[i].major, sizeof(students[i].major), stdin);
        students[i].major[strcspn(students[i].major, "\n")] = '\0';
        printf("Minor Subject: ");
        fgets(students[i].minor, sizeof(students[i].minor), stdin);
        students[i].minor[strcspn(students[i].minor, "\n")] = '\0';
    }
    printAllStudentNames(students, n);
    int searchRoll;
    printf("\nEnter a roll number to view student details: ");
    scanf("%d", &searchRoll);
    printStudentData(students, n, searchRoll);
    return 0;
}
