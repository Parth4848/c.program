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
int sumPrimes(int n){
if(n>500)
    return 0;
if(isPrime(n,2))
    return n + sumPrimes(n+1);
return sumPrimes (n+1);
}
int main()
{
    printf("sum of all prime numbers between 1 to 500 : %d",sumPrimes(2));
}
