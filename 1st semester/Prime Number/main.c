#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n , i ;

    printf("Enter an integer number : ") ;
    scanf("%d" , &n) ;

    for(i=2 ; i<sqrt(n) ; i++)
    {
        if(n%2 == 0)
        {
            printf("\nNot Prime") ;
        }
        else
        {
            printf("\nPrime") ;
        }
    }
    return 0;
}
