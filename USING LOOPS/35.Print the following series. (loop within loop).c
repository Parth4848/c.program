#include <stdio.h>

int main() {
    int i, j, k;

    // Pattern (A)
    printf("Pattern (A)\n");
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d %d\n", i, j);
        }
    }
    printf("\n");

    // Pattern (B)
    printf("Pattern (B)\n");
    for (j = 1; j <= 3; j++) {
        for (i = 1; i <= 3; i++) {
            printf("%d %d\n", i, j);
        }
    }
    printf("\n");

    // Pattern (C)
    printf("Pattern (C)\n");
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 2; j++) {
            for (k = 1; k <= 2; k++) {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    printf("\n");

    // Pattern (D)
    printf("Pattern (D)\n");
    for (i = 5; i >= 3; i--) {
        for (j = 1; j <= 2; j++) {
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}

