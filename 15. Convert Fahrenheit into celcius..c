#include <stdio.h>

int main(void) {
    float fahrenheit, celsius;

   
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    
    printf("Convert of Fahrenheit is equal to %f Celsius.\n", celsius);

    return 0;
}

