#include <stdio.h>
int main()
{
    int a[10],n=5,val,i;
    printf("enter 10 numbers :\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("enter new number :");
    scanf("%d",&val);
    a[n] = val ; n++;
    printf("after insertaion :");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
