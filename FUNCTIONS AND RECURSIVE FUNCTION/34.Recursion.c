#include <stdio.h>

int  fibonacci(int a, int b, int n) {
    if (n == 0)
        return 0;
    int c = a + b;
    printf("%d ", c);
    fibonacci(b, c, n - 1);
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: 1 1 ");
    fibonacci(1, 1, n - 2);   
}
