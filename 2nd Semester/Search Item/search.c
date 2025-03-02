#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , n , loc , item ,arr[100] ;

    printf("Enter array size : ");
    scanf("%d" , &n) ;

    for(i=0 ; i<n ; i++)
    {
        printf("Element : ") ;
        scanf("%d" , &arr[i]) ;
    }

    printf("Enter the item you want to search :" ) ;
    scanf("%d" , &item) ;
    loc=-1 ;
    for(i=0 ; i<n ; i++)
    {
        if(arr[i] == item)
        {
            loc = i ;
            break ;
        }
    }

    if(loc==-1)
    {
        printf("Data not found") ;
    }
    else
    {
        printf("Data found in location %d" , i+1) ;
    }


    return 0;
}
