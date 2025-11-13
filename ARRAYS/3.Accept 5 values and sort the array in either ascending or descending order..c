#include <stdio.h>
int main()
{
    int a[5],i,j,temp;
     printf("enter 5 values :");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
            for(i=0;i<4;i++)
                    for(j=i+1;j<5;j++){
                    if(a[i]>a[j])
                    temp = a[j];
            a[i] = a[j];
            a[j] = temp;
                    }
                    printf("array in ascending order :\n ");
                        for(i=0;i<5;i++)
                            printf("%d",a[i]);

}
