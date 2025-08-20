#include <stdio.h>

int main(void) {
    float principal, rate, time, interest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

   
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    
    interest = (principal * rate * time) / 100;

   
    printf("Simple Interest is %f\n", interest);

    return 0;
}

