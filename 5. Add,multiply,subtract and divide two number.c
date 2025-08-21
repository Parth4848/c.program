#include<stdio.h>

int main(void){
    int num1,num2,sum,subtract,multiply,divide;

    printf("First number :");
    scanf("%d",&num1);

    printf("Second number :");
    scanf("%d",&num2);

    sum= num1+num2;
    subtract= num1-num2;
    multiply= num1*num2;
    divide= num1/num2;
    
    printf("This is my sum :%d\n", sum);
    printf("This is my subtract : %d\n",subtract);
    printf("This is my multiply :%d\n", multiply);
    printf("This is my divide :%d\n", divide);
    return 0;
}



