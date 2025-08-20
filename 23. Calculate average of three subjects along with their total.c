#include <stdio.h>

int main(void) {
    float sub1, sub2, sub3, total, average;

    
    printf("Enter marks of subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &sub3);
    
    total = sub1 + sub2 + sub3;

    average = total / 3;

    printf("Total marks is %f\n", total);
    printf("Average marks is %f\n", average);

    return 0;
}

