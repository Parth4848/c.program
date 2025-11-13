#include <stdio.h>
int main()
{
    char books[3][50];
    char *ptr[3];
    int i;
    printf("Enter name of 3 books :");
    for (i=0;i<3;i++){
        printf("\nbook %d :",i+1);
        gets(books[i]);
        ptr[i] = books[i];
    }
    printf("\n ");
    for(i=0;i<3;i++){
        printf("\nbook %d : %s ",i+1,ptr[i]);
    }
}
