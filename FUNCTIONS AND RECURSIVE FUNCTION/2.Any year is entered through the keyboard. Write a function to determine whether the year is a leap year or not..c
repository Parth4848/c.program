#include <stdio.h>
int isleapyear(int year){
   if (year %400 == 0 || year %4==0 && year%100 !=0);
   return 1;
   else
    return 0;

   }
int main ()
{

    int year ;
    printf("enter the value of year:");
    scanf("%d",&year);
    if (isleapyear(year)){
        printf( "%d is leap year",year);
    } else {
    printf("%d is not leap year",year);
    }

}
