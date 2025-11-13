#include <stdio.h>
int main ()
{
    int a[5],i;
    printf("enter 5 values :");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("you entered");
    for(i=0;i<5;i++){
            printf("%d\n",a[i]);
    }
}
