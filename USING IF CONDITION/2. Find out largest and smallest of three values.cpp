#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter value of X=");
    scanf("%d",&x);
    printf("Enter value of Y=");
    scanf("%d",&y);
    printf("Enter value of Z=");
    scanf("%d",&z);
    if (x>=y && x>=z)
    {
        printf("X is largest\n");
        if (y>=z)
        {
            printf("z is smallest\n");
        }
        else
        {
            printf("y is smallest\n");
        }

    }
    else if (y>=x && y>=z)
    {
        printf("Y is largest\n");
        if (x>=z)
        {
            printf("z is smallest\n");
        }
        else
        {
            printf("x is smallest\n");
        }

    }
    else
    {
        printf("z is greatest\n");
        if (x>=y)
        {
            printf("y is the smallest\n");
        } else
        {
            printf("x is the smallest\n");
        }


    }

    return 0;
}
