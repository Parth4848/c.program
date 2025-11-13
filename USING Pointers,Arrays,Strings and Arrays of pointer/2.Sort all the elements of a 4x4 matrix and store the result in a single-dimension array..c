#include <stdio.h>
int main ()
{
    int matrix[4][4],arr[16];
    int i,j,k,temp,index=0;
    printf("enter 16 element of a matrix :");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&matrix[i][j]);
            arr[index++]=matrix[i][j];
        }
    }
    for(i=0;i<16-1;i++){
        for(j=0;j<16-1;j++){
                if(arr[j]>arr[j+1]){
                    temp =arr[j+1];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
            }
        }
    }
    printf("\nshorted elementin 1d array :");
    for(i=0;i<16;i++){
        printf("\n%d",arr[i]);
    }
}
