#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100] ;
    int i , n , odd ;

    printf("Enter Your Array Size : ") ;
    scanf("%d" , &n) ;

    for(i=0 ; i<n ; i++)
    {
        printf("Number %d : " , i) ;
        scanf("%d" , &arr[i]) ;
    }

    printf("\nYou Have Entered : ") ;
    for(i=0 ; i<n ; i++)
    {
        printf(" %d" , arr[i]) ;
    }
    printf("\n") ;

    printf("\nOdd Numbers Are : ") ;
    for(i=0 ; i<n ; i++)
    {
        if(arr[i] % 2==0)
        {
            printf("%d " , arr[i]) ;
        }
    }
    printf("\n") ;

    printf("\nEven Nummbers Are : ") ;
    for(i=0 ; i<n ; i++)
    {
        if(arr[i] % 2==1)
        {
            printf("%d " , arr[i]) ;
        }
    }
    printf("\n\n") ;
    return 0;
}
