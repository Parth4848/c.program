#include <stdio.h>

int main(void) {
    int hour;
    int minute;

    printf("Enter how many hour: ");
    scanf("%d", &hour);

    minute = hour * 60;

    printf("conversion into min is %d \n",minute);

    return 0;
}

