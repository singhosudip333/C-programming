#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100] ;
    int pos=0 , neg=0 , i , n ;

    printf("Enter Array Size : ") ;
    scanf("%d" , &n) ;

    for(i=0 ; i<n ; i++)
    {
        printf("Number %d : " , i) ;
        scanf("%d" , &arr[i]) ;
    }

    printf("\nPositive Numbers Are :") ;
    for(i=0 ; i<n ; i++)
        if(arr[i] > 0)
        {
            printf("%d " , arr[i]) ;
            pos = pos + arr[i] ;
        }
    printf("\nSum of Positive nembers is : %d \n" , pos) ;

    printf("\n\nNegative Numbers Are :") ;
    for(i=0 ; i<n ; i++)
        if(arr[i] < 0)
        {
            printf("%d " , arr[i]) ;
            neg = neg + arr[i] ;
        }
    printf("\nSum of Negative nembers is : %d \n" , neg) ;

    return 0;
}
