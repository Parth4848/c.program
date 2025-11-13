
#include <stdio.h>
int isPrime(int n,int i){
if(n<=2)
    return (n==2);
if(n%i==0)
    return 0;
if(i*i>n)
    return 1;
return isPrime(n,i+1);
}
void printPrime(int n){
if(n>500)
    return;
if(isPrime(n,2))
    printf("%d\n",n);
printPrime(n+1);
}
int main()
{
    printf("prime numbers between 1 and 500:\n ");
    printPrime(2);
}
