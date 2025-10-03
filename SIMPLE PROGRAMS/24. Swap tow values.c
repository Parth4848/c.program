#include <stdio.h>

int main(void) {
    int a, b, c;

    
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("Swapping the values are a = %d  b = %d \n", a, b);
    return 0;
}

