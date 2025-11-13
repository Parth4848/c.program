#include <stdio.h>
int sumDiv5(int n){
    if(n==0)
        return 0;
if(n%5==0)
    return n + sumDiv5(n-1);
return sumDiv5(n-1);
}
int main()
{
    printf("sum = %d",sumDiv5(100));
}
