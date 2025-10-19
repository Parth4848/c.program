#include <stdio.h>

int main(void) {
    int gs,a,d, ns;

    
    printf("The value of gross salary is ");
    scanf("%d",&gs);
    
    a = 0.10 * gs;
    d = 0.03 * gs;
    ns = gs + a - d;
    
    printf("Net salary is %d\n", ns);

    return 0;
}

