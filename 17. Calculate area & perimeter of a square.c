#include <stdio.h>

int main(void) {
    float length, area, perimeter;

    
    printf("Enter the length of the square's side: ");
    scanf("%f", &length);

    
    area = length * length;
    perimeter = 4 * length;

    
    printf("Area of the square is %f\n", area);
    printf("Perimeter of the square is %f\n", perimeter);

    return 0;
}

