#include <stdio.h>
int main()
{

    int n,i,a=1,b=1,c;
    printf("enter how many terms :");
    scanf("%d",&n);
    printf("fibonacci series:");
    if(n>=1)
        printf("\n%d",a);
    if(n>=2)
        printf("\n%d",b);
    for (i=3 ;i<=n;i++){
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }


}
