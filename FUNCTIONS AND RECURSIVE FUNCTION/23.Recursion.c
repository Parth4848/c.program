#include <stdio.h>
 int  sumDigits(int n){
 if(n==0)
    return 0;
 return (n % 10 ) + sumDigits(n/10);
 }
int main()
{
    int n ;
    printf("enter a number :");
    scanf("%d",&n);
    printf("sum of digits = %d",sumDigits(n));
}
