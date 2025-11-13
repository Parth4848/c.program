#include <stdio.h>
int main()
{
    int a[5],b[5],i,j=0;
    printf("enter 5 elements :");
    for(i=0;i<5;i++)
        scanf("%d",a[i]);
        for(i=0;i<10;i++)
            b[i]= a[j++];
        printf("copied array (skipping one elements ) :\n");
        for(i=0;i<10;i++)
            printf("%d",b[i]);

}
