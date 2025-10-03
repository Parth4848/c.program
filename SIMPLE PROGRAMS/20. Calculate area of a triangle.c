#include <stdio.h>

int main(void) {
    float b, h, a;

    
    printf("Enter the value of base ");
    scanf("%f", &b);

    
    printf("Enter the value of Height ");
    scanf("%f", &h);

    
    a = 0.5 * b * h;

    
    printf("Area is %f\n", a);

    return 0;
}

