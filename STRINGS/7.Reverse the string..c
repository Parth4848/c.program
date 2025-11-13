#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100];
    int i;
    printf("enter a string :");
    fgets(str,sizeof(str),stdin);
    strrev(str);
    printf("reversed string: %s",str);
    return 0;
}

