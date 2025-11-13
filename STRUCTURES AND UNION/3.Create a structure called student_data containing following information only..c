#include <stdio.h>
#include <string.h>
struct student_data {
    int rollNo;
    char name[50];
    float physics;
    float maths;
    float chemistry;
    float total;
};
int main() {
    struct student_data student;
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNo);
    getchar();
    printf("Enter Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';
    printf("Enter marks in Physics: ");
    scanf("%f", &student.physics);
    printf("Enter marks in Maths: ");
    scanf("%f", &student.maths);
    printf("Enter marks in Chemistry: ");
    scanf("%f", &student.chemistry);
    student.total = student.physics + student.maths + student.chemistry;
    printf("\n--- Student Information ---\n");
    printf("Roll Number : %d\n", student.rollNo);
    printf("Name        : %s\n", student.name);
    printf("Physics     : %.2f\n", student.physics);
    printf("Maths       : %.2f\n", student.maths);
    printf("Chemistry   : %.2f\n", student.chemistry);
    printf("Total Marks : %.2f\n", student.total);
    return 0;
}

