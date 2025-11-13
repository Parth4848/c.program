#include <stdio.h>

int main() {
    int i, j;

    // ----- Pattern (A) -----
    printf("Pattern (A):\n");
    for (i = 1, j = 5; i <= 5 && j >= 1; i++, j--) {
        printf("%d %d\n", i, j);
    }

    // ----- Pattern (B) -----
    printf("\nPattern (B):\n");
    for (i = 1, j = 5; i <= 3 && j >= 3; i++, j--) {
        printf("%d %d\n", i, j);
        printf("%d %d\n", i, j);
    }

    return 0;
}

