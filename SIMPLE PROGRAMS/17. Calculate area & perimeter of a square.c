#include <stdio.h>

int main(void) {
    float l, a, p;

    
    printf("Enter the lenght ");
    scanf("%f", &l);

    
    a = l * l;
    p = 4 * l;

    
    printf("Area of  square is %f\n", a);
    printf("Perimeter of  square is %f\n", p);

    return 0;
}

