#include <stdio.h>
int sumDiv13(int n){
if(n<1)
    return 0;
    if(n%13==0)
        return n+ sumDiv13(n-1);
    return sumDiv13(n-1);
}
int main()
{
    printf("sum = %d",sumDiv13(100));
}
