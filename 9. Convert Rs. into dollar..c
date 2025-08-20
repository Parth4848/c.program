#include <stdio.h>

int main(void) {
    float rupees, dollars;

    
    printf("Enter amount in rupees: ");
    scanf("%f", &rupees);

    
    dollars = rupees / 48;

    
    printf("The converion of rupees is equal to %f dollars\n",  dollars);

    return 0;
}

