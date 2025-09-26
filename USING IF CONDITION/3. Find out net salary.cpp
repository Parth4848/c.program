#include<stdio.h>

int main(){
    int gross;
    float allowance,deduction,net;
    printf("Enter gross salary=");
    scanf("%d",&gross);
    if (gross>5000)
    {
        allowance=0.07*gross;
        deduction=0.02*gross;
        if (gross>10000)
        {
            allowance=0.1*gross;
            deduction=0.03*gross;
        }
    }
    net=gross+allowance-deduction;
    printf("the net salary=%.2f",net);
    return 0;
}
