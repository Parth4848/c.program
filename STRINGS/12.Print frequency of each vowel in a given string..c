#include <stdio.h>
#include <ctype.h>
int main ()
{
    char str[200];
    int i,a=0,e=0,i_count =0,o=0,u=0;
    printf("enter a string : ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
            char ch=tolower(str[i]);
    if (ch=='a')
        a++;
    else if(ch=='e')
        e++;
    else if(ch=='i')
        i_count++;
    else if(ch=='o')
        o++;
    else if(ch=='u')
        u++;
    }
    printf("\nfrequancy of each vowel :");
    printf("A or a :%d\n",a);
    printf("E or e :%d\n",e);
    printf("I or i :%d\n",i_count);
    printf("O or o :%d\n",o);
    printf("U or u :%d\n",u);
}
