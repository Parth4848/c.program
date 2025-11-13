#include <stdio.h>
int main()
{
    int a[5],i;
    printf("enter 5 elements :\n");
    for(i=1;i<6;i++)
        scanf("%d",&a[i]);
    printf("reversed array :\n");
    for(i=5;i>0;i--)
        printf("%d\n",a[i]);
}
