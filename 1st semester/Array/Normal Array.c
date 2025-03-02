#include <stdio.h>

int main()
{
    /* Write a program in C to store elements in an array and print it. */

    int num[5];
    int i;

    printf("Enter five integer numbers \n\n");
    for (i = 0; i < 5; i++)
    {
        printf("Number - %d : ", i);
        scanf("%d", &num[i]);
    }

    printf("\nYour numbers are : ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", num[i]);
    }

    return 0;
}
