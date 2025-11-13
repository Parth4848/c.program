#include  <stdio.h>
int main()
{
    int i=1,n,sum=0,b;
    printf("enter the value of n ");
    scanf("%d",&n);
    while(i<n){
        b= i*2 ;
        sum += b;
        i++;
    }
    printf("%d",sum);
}

