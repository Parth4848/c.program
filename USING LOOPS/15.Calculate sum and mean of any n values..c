#include <stdio.h>
int main ()
{
    int n,i;
    float num ,sum =0,mean;
    printf("enter the vallues of numbers :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\n enter value %d",i);
        scanf("%f",&num);
        sum += num;
    }
    mean = sum /n ;
    printf("\n sum %.2f",sum);
    printf("\n mean %.2f",mean);
    return 0;
}
