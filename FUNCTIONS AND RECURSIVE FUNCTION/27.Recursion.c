#include <stdio.h>
void factors(int n,int i){
if(i>n)
    return;
if(n%i==0)
    printf("%d\n",i);
factors(n,i+1);
}
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    printf("factors :");
    factors(n,1);
}
