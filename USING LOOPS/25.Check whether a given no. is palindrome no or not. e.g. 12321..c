
#include <stdio.h>
int main ()
{

    int num,original,rev =0,digit;
    printf("enter a number :");
    scanf("%d",&num);
    original = num ;
    while (num >0){
        digit=num%10;
        rev = rev *10 + digit ;
        num =num/10;
    }
    if(original ==rev)
        printf(" the number is palindrome\n ");
    else
        printf("The number is not palindrome \n");
}
