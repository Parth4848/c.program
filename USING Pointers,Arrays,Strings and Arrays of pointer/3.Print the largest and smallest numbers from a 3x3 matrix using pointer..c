#include <stdio.h>
int main()
{
    int A[3][3],i,j,*p,max,min;
    printf("Enter elements of 3*3 matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",A[i][j ]);
        }
    }
    p=&A[0][0];
    max=min=*p;
    for(i=0;i<9;i++){
        if(*(p + i) > max)
            max = * (p+i);
        if (*(p + i)<min)
            min = * (p+i);
    }
    printf("\nlargest element = %d", max);
    printf("\nsmallest element = %d", min);
    return 0;
}
