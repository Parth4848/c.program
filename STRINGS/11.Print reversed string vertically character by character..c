#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100];
    int i;
    printf("enter a string :");
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    printf("\n reversed string vertically :");
    for (int i=len -1; i>=0;i--){
        printf("%c\n",str[i]);
    }
    return 0;
}

