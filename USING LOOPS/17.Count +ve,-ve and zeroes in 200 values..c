#include <stdio.h>
int main()
{

    int i,num,positive=0,negative=0,zero=0;
    printf("enter 200 values");
    for(i=1;i<=200;i++){
        printf("\nenter number %d :",i);
        scanf("%d",&num);
        if(num>0)
            positive++;
        else if(num<0)
            negative++;
        else
            zero++;
    }
    printf("\ntotal positve number %d",positive);
    printf("\ntotal negative number %d",negative );
    printf("\ntotal zero number %d",zero);

}
