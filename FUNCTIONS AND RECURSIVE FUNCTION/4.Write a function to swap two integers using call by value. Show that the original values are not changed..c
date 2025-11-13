#include <stdio.h>
void swap(int x,int y){
    int temp;
 x=temp;
 x=y;
 y=temp;

}
int main ()
{

    int a,b;
    printf("enter the value of a,b");
    scanf("%d%d",&a,&b);
    printf("before swapping : a=%d,b=%d\n ",a,b);
    swap(a,b);
    printf("after swapping  :a=%d,b=%d\n" ,b,a);
}
