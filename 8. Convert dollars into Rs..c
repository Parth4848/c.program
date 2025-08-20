#include <stdio.h>

int main(void) {
    float dollars, rupees;

    
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    
    rupees = dollars * 48;

    
    printf("The conversion of dollars is equal to %f rupees.\n", rupees);

    return 0;
}

