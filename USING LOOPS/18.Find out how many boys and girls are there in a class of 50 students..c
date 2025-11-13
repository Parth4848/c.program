#include <stdio.h>
int main()
{

    int i,boys=0,girls=0;
    char sex;
    printf(" enter sex code for 50 students M for boys  ,F for female ");
    for(i=1;i<=50;i++){
        printf("\nenter sex code of studennt %d :",i);
        scanf("%c",&sex);
        if(sex =='M' || sex == 'm')
            boys++;
        else if(sex =='F' || sex == 'f')
            girls++;
            else
                printf("enter valid sex code");


    }
    printf("\ntotal boys =%d",boys);
    printf("\ntotal girls =%d",girls);
}
