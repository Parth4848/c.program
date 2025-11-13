#include <stdio.h>
int sumArray(int arr[],int n){
if(n==0)
    return 0;
return arr[n-1] +sumArray(arr,n-1);
}
int main()
{
    int n,i;
    printf("enter number of values :");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d numbers :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum =sumArray(arr,n);
    float mean = (float)sum /n;
    printf("sum =%d\nmean = %.2f",sum,mean);
}
