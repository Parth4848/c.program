#include <stdio.h>
void seperateDigits(int n){
if(n==0)
return;
seperateDigits(n/10);
printf("%d\n",n%10);
}
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    printf("Digits : ");
    seperateDigits(n);
}
