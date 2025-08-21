
#include <stdio.h>

int main(void) {
    int minute;
    int hour;

    printf("Enter how many minutes: ");
    scanf("%d", &minute);

    hour = minute/ 60;

    printf("The converion  into hours is %d \n",hour);

    return 0;
}
