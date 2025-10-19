#include <stdio.h>

int main(void) {
    float f, c;

   
    printf("Temp in F: ");
    scanf("%f", &f);

    
    c = (f - 32) * 5.0 / 9.0;

    
    printf("Conversion of farenheit is %f\n", c);

    return 0;
}

