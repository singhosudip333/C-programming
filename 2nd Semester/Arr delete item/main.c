#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i , pos , arr[100] ;

    printf("Enter Array Size : ") ;
    scanf("%d" , &n) ;

    printf("\n") ;

    for(i=0 ;  i<n ; i++)
    {
        printf("Element %d - " , i+1) ;
        scanf("%d" , &arr[i] ) ;
    }

    printf("\n") ;

    printf("Normal Array Is : \n" ) ;
    for(i=0 ; i<n ; i++)
    {
        printf("Element %d - %d\n" , i+1 , arr[i] ) ;
    }

    printf("\nEnter the position you want to delete : ") ;
    scanf("%d" , &pos) ;

    if(pos > n)
    {
        printf("Deletion Not Possible") ;
    }
    else
    {
        for(i = pos-1 ; i< n-1 ; i++)
        {
            arr[i] = arr[i+1] ;
        }

        printf("\nAfter delete , Array Is : \n" ) ;
        for(i=0 ; i<n-1 ; i++)
        {
            printf("Element %d - %d\n" , i+1 , arr[i] ) ;
        }
    }
    return 0;
}
