#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter N=");
    scanf("%d",&n);

    for (int i = 0; i <=2*n-1 ; i++)
    {
        if (i%2!=0)
        {
            sum+=i;
        }

    }
    printf("%d",sum);
    return 0;
}
