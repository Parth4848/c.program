#include <stdio.h>
int main()
{
    int i,num,largest,smallest;

    for (i=1;i<=5;i++){
        printf("\n enter number %d : ",i);
        scanf("%d",&num);
        if(num>largest)
            largest = num;
        if(num<smallest)
            smallest = num;
    }
    printf("\nlargest number = %d",largest);
    printf("\nsmallest number =%d",smallest);
}
