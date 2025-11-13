#include<stdio.h>
void printOdd(int n){
    if(n>100) return;
    if(n%2!=0) printf("%d ",n);
    printOdd(n+1);
}
int main(){
    printOdd(1);
    return 0;
}