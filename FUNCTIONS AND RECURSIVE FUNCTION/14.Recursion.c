#include <stdio.h>
int sumArray(int arr[],int n){
if(n==0)
    return 0;
return arr[n-1] +sumArray(arr,n-1);
}
int main()
{
    int i;

    int arr[10];
    printf("enter 10 numbers :\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int sum =sumArray(arr,10);
    float mean = (float)sum /10;
    printf("sum =%d\nmean = %.2f",sum,mean);
}
