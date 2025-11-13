//write a program to impliment a calculator using seperate function for add substract multiply and divide
#include <stdio.h>
int sum(int x,int y){
int sum=x+y;
return sum;
}
int sub(int x,int y){
int sub = x-y;
return sub;
}
int mul(int x, int y){
int mul = x*y;
return mul;
}
int div(int x, int y){
int div = x/y;
return div;
}


int main()
{
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);

    printf("sum of two numbers is %d\n",sum(a,b));
    printf("substract of two numbers is %d\n",sub(a,b));
    printf("multiply of two numbers is %d\n",mul(a,b));
    printf("divison of two numbers is %d\n",div(a,b));
}
