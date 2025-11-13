#include <stdio.h>
int main ()
{

    int num ,count =0;
    printf("enter number :");
    scanf("%d",&num);
    if(num==0)
        count = 1;
    else {
        while (num !=0){
            num =num /10;
            count++;
        }
    }
    printf("numbber of digits = %d\n",count);

}
