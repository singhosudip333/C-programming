#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n , i , num=1 ;

    printf("Enter an integer number : ") ;
    scanf("%d" , &n) ;

    for(i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i == 0)
        {
            num = 0 ;
            break ;
        }
    }

    if(num == 0)
    {
        printf("Its a not prime number") ;
    }
    else
    {
        printf("Prime number") ;
    }

    return 0;
}
