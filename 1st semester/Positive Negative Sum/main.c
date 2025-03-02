#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100] ;
    int pos , neg , i , n ;

    printf("Enter Array Size : ") ;
    scanf("%d" , &n) ;

    for(i=0 ; i<n ; i++)
    {
        printf("Number %d" , arr[i]) ;
        scanf("%d" , &arr[i]) ;
    }

    printf("Positive Numbers Are : %d and Negative Numbers Are &d" , i , i) ;
    for(i=0 ; i<n ; i++)
        if(arr[i] > 0)
        {
            printf("%d" , i) ;
        }
        if(arr[i] < 0)
        {
            printf("%d" , i) ;
        }
    return 0;
}
