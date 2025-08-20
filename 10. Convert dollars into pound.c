#include <stdio.h>

int main(void) {
    float dollars, rupees, pounds;

    
    printf("Enter the amount in US Dollars: ");
    scanf("%f", &dollars);

    
    rupees = dollars * 48;

    
    pounds = rupees / 70;

    
    printf("Coversion of Dollars is equal to %f  Pounds.\n",  pounds);

    return 0;
}

