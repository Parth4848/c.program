#include <stdio.h>

int main(void) {
    int gs, d, ns;

    
    printf("Gross sales is ");
    scanf("%d", &gs);

    
    d = 0.10 * gs;

    ns = gs - d;

    
    printf("The net sales is %d\n", ns);

    return 0;
}

