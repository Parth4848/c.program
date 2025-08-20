#include <stdio.h>

int main(void) {
    int hours;
    int minutes;

    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf("The converion of this hours into minutes is %d \n",minutes);

    return 0;
}

