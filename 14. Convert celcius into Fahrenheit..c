#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

    
    printf("Convert of Celsius = %f Fahrenheit\n", fahrenheit);

    return 0;
}

