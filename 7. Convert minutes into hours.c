
#include <stdio.h>

int main(void) {
    int minutes;
    int hours;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes/ 60;

    printf("The converion of this minutes into hours is %d \n",hours);

    return 0;
}
