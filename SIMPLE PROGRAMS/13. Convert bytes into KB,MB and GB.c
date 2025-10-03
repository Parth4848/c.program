#include <stdio.h>

int main(void){
    float bytes,KB,MB,GB;
    
    printf("Enter the valure of bytes:");
    scanf("%f",&bytes);
    
    KB = bytes/1000;
    MB = bytes/1000000;
    GB = bytes/1000000000;
    
    printf("Convert of bytes into Kb is %f\n",KB);
    printf("Convert of bytes into Mb is %f\n",MB);
    printf("Convert of bytes into Gb is %f\n",GB);
    
    return 0;
}
