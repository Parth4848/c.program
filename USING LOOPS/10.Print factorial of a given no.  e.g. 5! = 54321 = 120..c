#include <stdio.h>
int main()

{   int i,n, fectorial = 1;

printf("please enter the number n");
 scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
     fectorial *=i ;
    }
     printf("the result of fectorial is %d",fectorial);
}
