#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100] ;
    int arr2[100] ;
    int i , k , n ;

    printf("Enter Array Size : ") ;
    scanf("%d" , &n ) ;

    for(i=0 ; i<n ; i++)
    {
        printf("Number %d : " , i) ;
        scanf("%d" , &arr[i] ) ;
    }

    k=n-1 ;
    for(i=0 ; i<n ; i++)
    {
        arr2[k] = arr[i] ;
        k-- ;
    }

    printf("\nCopy Reverse Array is : ") ;
    for(i=0 ; i<n ; i++)
    {
        printf(" %d " , arr2[i]) ;
    }
    return 0;
}
