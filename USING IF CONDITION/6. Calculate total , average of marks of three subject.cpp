#include<stdio.h>
#include<string.h>

int main(){
    int m1,m2,m3,tot;
    float avg;
    char a[5];
    printf("Enter marks of maths=");
    scanf("%d",&m1);
    printf("Enter marks in physics=");
    scanf("%d",&m2);
    printf("Enter marks in chemistry=");
    scanf("%d",&m3);
    tot=m1+m2+m3;
    avg=(float)tot/3;
    if (m1>=35 && m2>=35 && m3>=35)
    {
        strcpy(a,"pass");
    }else
    {
        strcpy(a,"fail");
    }
    if (strcmp(a,"pass")==0)
    {
        if (avg>=70)
        {
            printf("outstanding performance\n");
            printf("%s",a);
        }
        else if (avg>=60)
        {
            printf("first class performance\n");
            printf("%s",a);
        }
        else if (avg>=50)
        {
            printf("second class performance\n");
            printf("%s",a);
        }
        else if (avg>=35)
        {
            printf("third class performance\n");
            printf("%s",a);
        }

    }else
    {
        printf("%s",a);
    }



    return 0;
}
