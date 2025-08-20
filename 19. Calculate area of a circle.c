#include <stdio.h>

int main(void) {
    float radius, area;

    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    
    area = (22.0 / 7.0) * radius * radius;

    
    printf("Area of the circle is %f\n", area);

    return 0;
}

