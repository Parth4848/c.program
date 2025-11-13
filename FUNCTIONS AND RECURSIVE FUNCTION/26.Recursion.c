#include <stdio.h>
#include <math.h>
int countDigits(int n){
if(n==0)
    return 0;
return 1 + countDigits(n/10);
}
int isArmstrong(int n,int temp,int power ){
if(temp==0)
    return 0;
int digit = temp %10;
return pow(digit,power ) + isArmstrong(n,temp/10,power);
}
int main()
{
    int n , digits;
    printf("enter a number :");
    scanf("%d",&n);
    digits = countDigits(n);
    if(n== isArmstrong(n,n,digits))
        printf("armstrong number ");
    else
        printf("not an armstrong number ");
}
