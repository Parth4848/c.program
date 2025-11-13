#include <stdio.h>
int main()
{

    int num,digit ,rev =0;
    printf("enter nnumber :");
    scanf("%d",&num);
    int temp =num;
    while (temp>0){
        rev=rev*10 + (temp%10);
        temp =temp /10;
    }
    printf("digits:");
    while(rev>0){
        digit=rev%10;
        printf("\n%d",digit);
        rev =rev/10;
    }
}
