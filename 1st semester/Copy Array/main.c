#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100] ;
    int arr2[100] ;
    int i , j , n ;

    printf("Enter Array Size : ") ;
    scanf("%d" , &n ) ;

    for(i=0 ; i<n ; i++)
    {
        printf("Number %d : " , i) ;
        scanf("%d" , &arr[i] ) ;
    }

    j=0 ;
    for(i=0 ; i<n ; i++)
    {
        arr[i] = arr2[j] ;
        printf(" %d " , arr2[j]) ;
        j++ ;
    }

 /*   for(j=0 ; j<n ; j++)
    {
        for(i=0 ; i<1 ; i++)
        {

        }
    }
*/
    return 0;
}
