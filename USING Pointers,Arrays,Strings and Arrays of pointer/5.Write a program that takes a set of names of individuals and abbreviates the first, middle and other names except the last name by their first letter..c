#include <stdio.h>
#include<string.h>
int main()
{
    char name[100],*word,last[30],temp[100];
    printf("Enter full name :");
    gets(name);
    word = strtok(name," ");
    while (word != NULL){
        strcpy(last,word);
        word = strtok(NULL," ");
        if(word != NULL){
            char ch = last[0];
            sprintf(temp + strlen(temp),"%c.",ch);
        }
    }
    printf("abbreviated name %s%s\n",temp,last);
}
