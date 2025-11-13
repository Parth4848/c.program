#include <stdio.h>
int main()
{
    int a[10],n=5,val,i;
    printf("enter 10 numbers :\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("enter new number :\n");
    scanf("%d",&val);
    for(i=n;i>0;i--)
        a[i] = a[i-1];
    a[0]=val;n++;
    printf("after insertion :");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
