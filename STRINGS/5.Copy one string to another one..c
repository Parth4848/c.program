#include <stdio.h>
#include<string.h>
int main ()
{
    char str1[100],str2[100];
    printf("enter a string :");
    fgets(str1,sizeof(str1),stdin);
    strcpy(str2,str1);
    printf("copied string :%s", str2);
}
