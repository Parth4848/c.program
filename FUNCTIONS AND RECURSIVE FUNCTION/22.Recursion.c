#include <stdio.h>
int  countDigits(int n){
if(n==0)
    return 0 ;
    return 1 + countDigits(n/10);
}
int main()
{
    int n ;
    printf("enter a number :");
    scanf("%d",&n);
    printf("total digits = %d",countDigits(n));
}
