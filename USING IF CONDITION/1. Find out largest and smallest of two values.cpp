#include<stdio.h>

int main(){
    int x,y;
    printf("Enter value of X=");
    scanf("%d",&x);
    printf("Enter value of Y=");
    scanf("%d",&y);
    if (x>=y)
    {
        printf("X is greater");
    } else if (x=y)
    {
        printf("X and Y are equal");
    }


    else
    {

        printf("Y is greater");
    }


    return 0;
}
