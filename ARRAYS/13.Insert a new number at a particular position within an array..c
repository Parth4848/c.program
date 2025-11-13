#include <stdio.h>
int main()
{
    int a[10],n=5,val,i,pos;
    printf("enter position ");
    scanf("%d",&pos);
    printf("enter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("enter new number :");
    scanf("%d",&val);
    for(i=n;i>=pos;i--)
        a[i] = a[i-1];
    a[pos-1]=val;n++;
    printf("after insertion :");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
