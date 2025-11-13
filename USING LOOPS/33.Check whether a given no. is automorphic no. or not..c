#include <stdio.h>
int main()
{
    int num,square,rem,temp,check=1;
    printf("enter a number  :");
    scanf("%d",&num);
    square=num*num;
    temp=num;
    while(temp>0){
        rem=temp%10;
        if(rem!=square%10){
            check=0;
             break;
       }
       temp=temp/10;
       square=square/10;
    }
    if(check==1){
        printf("%d is automorphic number",num);
    } else
    printf("%d is not automorphic number",num);
}
