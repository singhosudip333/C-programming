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
        scanf("%d" , arr[i]) ;
    }

    printf("You Have Entered : ") ;
    for(i=0 ; i<n ; i++)
    {
        printf(" %d" , arr[i]) ;
    }


    return 0;
}
