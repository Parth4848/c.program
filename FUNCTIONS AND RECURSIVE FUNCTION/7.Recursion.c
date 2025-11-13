#include<stdio.h>
int sumOdd(int n) {
    if(n>100) return 0;
    if(n%2!=0)
        return n + sumOdd(n+1);
    else
        return sumOdd(n+1);
}
int main() {
    printf("Sum of odd numbers 1-100 =%d",sumOdd(1));
    return 0;
}