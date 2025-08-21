#include <stdio.h>

int main(void) {
    float c, f;

    
    printf("Temp in C: ");
    scanf("%f", &c);

    
    f = (c * 9 / 5) + 32;

    
    printf("Conversion into farenheit is %f\n", f);

    return 0;
}

