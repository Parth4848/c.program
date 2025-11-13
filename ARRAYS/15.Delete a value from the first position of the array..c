#include <stdio.h>
int main()
{
    int a[10],n=5,i;
    printf("enter 10 numbers :\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        a[i] =a[i+1];
    n--;
    printf("after deletion :");
    for(i=0;i<n;i++)
        printf("%d",a[i]);

}
