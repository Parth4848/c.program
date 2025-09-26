#include<stdio.h>

int main(){
    int num;
    printf("Enter a number=");
    scanf("%d",&num);
    if (num%7==0)
    {
        printf("The entered number is divisible by 7");
    } else
    {
        printf("The entered number is not divisible by 7");
    }
    return 0;
}


