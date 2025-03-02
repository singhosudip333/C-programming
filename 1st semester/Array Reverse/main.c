#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] ;
    int i ;

    for(i=0 ; i<5 ; i++)
    {
        printf("Number %d : " , i) ;
        scanf("%d" , &arr[i]) ;
    }

    printf("\n\nReverse is : ") ;
    for(i=4 ; i>=0 ; i--)
    {
        printf("%d " , arr[i]) ;
        printf("\n\n") ;
    }

    return 0;
}
