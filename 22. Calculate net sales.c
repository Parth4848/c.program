#include <stdio.h>

int main(void) {
    float gross_sales, discount, net_sales;

    
    printf("Enter the gross sales: ");
    scanf("%f", &gross_sales);

    
    discount = 0.10 * gross_sales;

    net_sales = gross_sales - discount;

    
    printf("Net Sales is %f\n", net_sales);

    return 0;
}

