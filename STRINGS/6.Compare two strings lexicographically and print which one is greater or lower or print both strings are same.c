#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[100],str2[100];
    int result ;
    printf("enter first string :");
    fgets(str1,sizeof(str1),stdin);
    printf("enter second string :");
    fgets(str2,sizeof(str2),stdin);
    for(int i=0;str1[i] !='\0';i++){
        if(str1[i]=='\n'){
        str1[i] ='\0';
        break;
    }
  }
        for(int i=0;str2[i] !='\0';i++){
        if(str2[i]=='\n'){
        str2[i] ='\0';
        break;
    }
  }
    result = strcmp(str1,str2);
    if(result==0)
        printf("both string are the same .\n");
    else if(result<0)
        printf("first string is smaller (lexicographically lower).\n");
    else
        printf("first string is greater (lexicographically higher).\n");


}
