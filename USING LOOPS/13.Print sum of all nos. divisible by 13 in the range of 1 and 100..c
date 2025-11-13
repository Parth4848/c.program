#include <stdio.h>
int main ()
{
    int a=1,sum=0;
    while(a<=100){
        if (a%13==0){
            sum+= a;
        }
        a++;

    }
    printf("sum of numbers divisible by 13 from 1 to 100:%d\n",sum);
}
