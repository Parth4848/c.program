#include<stdio.h>
int sumEven(int n) {
    if(n>100) return 0;
    if(n%2==0)
        return n + sumEven(n+1);
    else
        return sumEven(n+1);
}
int main() {
    printf("Sum of even numbers 1-100 =%d",sumEven(1));
    return 0;
}