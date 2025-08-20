#include <stdio.h>

int main(void) {
    float kilograms, grams;

    
    printf("Enter the weight in kilograms: ");
    scanf("%f", &kilograms);

    
    grams = kilograms * 1000;

    
    printf("The conversion of kilograms is equal to %f grams.\n",  grams);

    return 0;
}

