#include <stdio.h>

int main(void) {
    float grams, kilograms;

    
    printf("Enter the weight in grams: ");
    scanf("%f", &grams);

    
    kilograms = grams / 1000;

    
    printf("Conversion of  grams is equal to %f kilograms.\n",  kilograms);

    return 0;
}

