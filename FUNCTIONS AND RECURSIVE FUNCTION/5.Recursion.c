#include<stdio.h>
int sum1toN(int n) {
    if(n==0) return 0;
    return n + sum1toN(n-1);
}
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("sum =%d",sum1toN(n));
    return 0;
}