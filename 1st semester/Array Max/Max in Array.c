#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100] ;
    int i , n , max;

    printf("Enter Array Size : ") ;
    scanf("%d" , &n) ;

    printf("\n") ;

    for(i=0 ; i<n ; i++)
    {
        printf("Number %d : " , i) ;
        scanf("%d" , &arr[i]) ;
    }

    max = arr[0] ;
    for(i=1 ; i<n ; i++)
    {
        if(max < arr[i])
        {
            max = arr[i] ;
        }
    }

    printf("\nThe maximun number is : %d" , max) ;

    return 0;
}
