#include <stdio.h>
#include <stdlib.h>

int main()
{
     int arr[100] , i , n , max , min ;

    printf("Enter Array Size - ") ;
    scanf("%d" , &n) ;
    printf("\n") ;

    for( i=0 ; i<n ; i++)
    {
        printf("Enter element %d - " , i) ;
        scanf("%d" , &arr[i] ) ;
    }

    max = arr[0] ;
    for(i=0 ; i<n ; i++)
    {
        if( max<arr[i] )
            max = arr[i] ;
    }

    min = arr[0] ;
    for(i=0 ; i<n ; i++)
    {
        if( min>arr[i] )
            min = arr[i] ;
    }
    printf("\nMaximum element is : %d" , max) ;
    printf("\nMinimun element is : %d" , min) ;

    return 0 ;
}
