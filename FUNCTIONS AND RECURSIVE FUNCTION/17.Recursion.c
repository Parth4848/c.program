#include <stdio.h>
void countNumbers(int arr[],int n,int *pos,int *neg,int *zero){
if(n==0)
    return;
    if(arr[n-1]>0)
        (*pos)++;
    else if(arr[n-1]<0)
        (*neg)++;
    else
        (*zero)++;
    countNumbers(arr,n-1,pos,neg,zero);
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
    int pos =0,neg=0,zero=0;
    countNumbers(arr,n,&pos,&neg,&zero);
    printf("+ve=%d\n-ve=%d\nzero=%d",pos,neg,zero);
}
