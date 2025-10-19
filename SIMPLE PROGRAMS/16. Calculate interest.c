#include <stdio.h>

int main(void) {
    float p, r t, i;

    
    printf("Enter the amount of principal ");
    scanf("%f", &p);

    
    printf("Enter rate of interest is ");
    scanf("%f", &r);

   
    printf("Enter the time: ");
    scanf("%f", &t);

    
    i = (p * r * t) / 100;

   
    printf("Simple Interest is %f\n", i);

    return 0;
}

