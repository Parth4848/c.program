#include <stdio.h>

int main(void) {
    int sub1, sub2, sub3, t, a;

    
    printf("Marks os sub1 is ");
    scanf("%d", &sub1);

    printf("Marks of sub2 is ");
    scanf("%d", &sub2);

    printf("Marks of sub3 is ");
    scanf("%d", &sub3);
    
    t = sub1 + sub2 + sub3;

    a = t/ 3;

    printf("The total marks are  %d\n", t);
    printf("The average marks are %d\n", a);

    return 0;
}

