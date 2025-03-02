#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b ;

    printf ("Enter a integer number : ") ;
    scanf ("%d",&b) ;

    if (b%2==0)
    {
        printf ("%d is an ODD number !",b) ;
    }
    else if (b%2==1)
    {
        printf ("%d in an EVEN number !",b) ;
    }
    else
    {
        printf ("NOT AN INTEGER NUMBER !",b) ;
    }
    return 0 ;
}
