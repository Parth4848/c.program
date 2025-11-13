# include <stdio.h>
long factorial (int n){
long fact =1;
for(int i=1 ;i<=n;i++){
    fact = fact *i;
}
return fact;
}
int main ()
{

    int num;
    printf("enter  a number :");
    scanf("%d",&num);
    printf("factorial of %d is %d ",num,factorial(num));
}
