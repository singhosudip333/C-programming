#include <stdio.h>
#include <stdlib.h>

void function(int n)
{
    if( n>=1 )
    {
        function(n-1) ;

        if( n%2 == 1)
        {
            printf("%d " , n) ;
        }
    }
    else
        return ;
}

int main()
{
    int n,result;

    printf("Enter an integer number : ") ;
    scanf("%d" , &n) ;
    printf("Odd Numbers Are : ") ;
    function(n) ;

    return 0;
}
