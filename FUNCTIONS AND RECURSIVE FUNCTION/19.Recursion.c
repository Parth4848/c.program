#include<stdio.h>
void printDivs(int n){
if(n==0)
    return;
printDivs(n-1);
if(n%5==0)
    printf("%d\n",n);
}
int main()
{
    printDivs(100);
}
