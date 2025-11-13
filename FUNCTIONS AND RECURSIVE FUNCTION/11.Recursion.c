#include <stdio.h>
void printName(char name[],int n){
if(n==0)
    return ;
    printf("%s\n",name);
    printName(name,n-1);
}
int main()
{

    printName("Dhruvil",5);
}
