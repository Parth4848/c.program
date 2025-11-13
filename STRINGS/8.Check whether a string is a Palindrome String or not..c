#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100];
    int i,len,flag =0;
    printf("enter a string :");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
        str[i] ='\0';
        break;
        }
    }
    len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!= str[len-i-1]){
            flag =1;
            break;
        }
    }
    if(flag==0)
        printf("the string is a palindrome.\n");
    else
       printf("the string is not a palindrome.\n");
}
