#include <stdio.h>
int main()
{
    int a[10],b[10]={0},n,i;
    printf("enter 10 elements :\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("enter shift positions :");
    scanf("%d",&n);
    for(i=0;i<10-n;i++)
        b[i+n]= a[i];
    printf("array after right shift \n");
      for(i=0;i<10;i++)
            printf("%d\n",b[i]);
}
