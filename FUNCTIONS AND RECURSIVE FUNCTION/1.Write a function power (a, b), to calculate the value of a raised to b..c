#include <stdio.h>
int power (int a,int b){
int result =1;
 for(int i=1;i<=b;i++){
        result=result*a;
        }
        return result;
}
int main()
{
    int a,b;
    printf("enter base a");
    scanf("%d",&a);
    printf("enter exponent b");
     scanf("%d",&b);

        printf("%d raised to the power %d is %d\n",a,b,power(a,b));


}
