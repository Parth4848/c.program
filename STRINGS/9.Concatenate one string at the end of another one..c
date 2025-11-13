
#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[200],str2[100];
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
    strcat(str1,str2);
    printf("concatenated string :%s",str1);
}
