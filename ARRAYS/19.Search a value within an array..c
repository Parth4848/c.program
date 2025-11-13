#include <stdio.h>
int main() {
    int a[10], n=10, val, i, found=0;
    printf("Enter 10 elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter value to search: ");
    scanf("%d", &val);

    for(i=0; i<n; i++) {
        if(a[i]==val) {
            printf("Value found at position %d\n", i+1);
            found=1;
            break;
        }
    }

    if(!found)
        printf("\nValue not found");
}
