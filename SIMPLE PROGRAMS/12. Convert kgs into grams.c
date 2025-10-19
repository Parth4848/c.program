#include <stdio.h>

int main(void) {
    int kg, g;

    
    printf("Enter the value of Kg ");
    scanf("%d", &kg);

    
    g = kg * 1000;

    
    printf("Conversion into gram is %d",  g);

    return 0;
}

