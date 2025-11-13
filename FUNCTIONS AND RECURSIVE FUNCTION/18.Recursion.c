#include <stdio.h>
void countGender(char arr[],int n,int *boys ,int *girls){
if(n==0)
    return;
if(arr[n-1]=='B'||arr[n-1]=='b' )
    (*boys)++;
else if(arr[n-1]=='G'||arr[n-1]=='g')
    (*girls)++;
countGender(arr,n-1,boys,girls);
}
int main()
{
    int n,i;
    printf("enter number of values :");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d gender :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int boys=0,girls=0;
    countGender(arr,n,&boys,&girls);
    printf("boys = %d\ngirls= %d",boys,girls);
}
