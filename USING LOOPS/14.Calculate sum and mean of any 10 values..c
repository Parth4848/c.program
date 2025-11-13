#include <stdio.h>
int main ()
{
    int a=0,num,sum =0;
    float mean;
    printf("enter 10 numbers:\n");
    while (a<10){
        printf("enter number :%d",a++);
        scanf("%d",&a);
        sum+=a;
        a++;
    }
    mean = sum/10;
    printf("\n sum of the 10 numbers %.2f\n",sum);
    printf("mean of the 10 numbers %.2f\n",mean);
}
