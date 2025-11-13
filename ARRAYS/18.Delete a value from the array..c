#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 2, 4}, n = 5, val, i, j;
    printf("Enter value to delete: ");
    scanf("%d", &val);

    for(i = 0; i < n; i++) {
        if(a[i] == val) {
            for(j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
            i--;
        }
    }

    printf("After deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);    
}
