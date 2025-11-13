#include <stdio.h>
int sumFactors(int n,int i){
if(i==n)
return 0;
if(n%i==0)
    return i + sumFactors(n,i +1);
else
    return sumFactors(n,i+1);
}
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n==sumFactors(n,1))
        printf("perfect number ");
        else
        printf("not a perfect number ");
}
