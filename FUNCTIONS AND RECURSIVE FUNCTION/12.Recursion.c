#include <stdio.h>
void printName(char name[],int count){
if(count==0)
    return;
    printf("%s\n",name);
    printName(name,count -1);
}
int main()
{
    printName("Dhruvil",5);
}
