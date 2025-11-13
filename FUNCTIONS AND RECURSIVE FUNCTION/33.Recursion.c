#include <stdio.h>
#include <math.h>

int power10(int n) {
    if (n == 0)
        return 1;
    return 10 * power10(n - 1);
}

int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int n, sq, digits, mod;
    printf("Enter a number: ");
    scanf("%d", &n);
    sq = n * n;
    digits = countDigits(n);
    mod = sq % power10(digits);
    if (mod == n)
        printf("Automorphic number");
    else
        printf("Not an Automorphic number");
    
}
