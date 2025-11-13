#include <stdio.h>
#include<ctype.h>
void countNumbers(int arr[],int n){
if(n==1)
    return 0;
int max = findMax(arr,n-1);
return (arr[n-1]> max)? arr[n-1] :max;
}
int findMin(int arr[],int n){
if(n==1)
    return arr[0];
int min = findMin(arr,n-1);
return (arr[n-1]> min)? arr[n-1] :min;
}
int main()
{

     int i;

    int arr[100];
    printf("enter 100 numbers :\n");
    for(i=0;i<100;i++){
        scanf("%d",&arr[i]);
    }
    printf("Max = %d\nMin = %d",findMax(arr,100),findmin(arr,100));
}
