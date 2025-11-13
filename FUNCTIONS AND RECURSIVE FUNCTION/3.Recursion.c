#include<stdio.h>
void printEven(int n){
    if(n>100) return;
    if(n%2==0) printf("%d ",n);
    printEven(n+1);
}
int main(){
    printEven(1);
    return 0;
}