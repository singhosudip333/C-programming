#include <stdio.h>
#include <stdlib.h>

void function(int n)
{
    if( n>=1 )
    {
        function(n-1) ;

        if( n%2 == 0)
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
    printf("Even Numbers Are : ") ;
    function(n) ;

    return 0;
}
