#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i , pos , num , arr[100] ;

    printf("Enter Array Size : ");
    scanf("%d" , &n) ;

    for(i=0 ; i<n ; i++)
    {
        printf("Enter element %d : " , i+1) ;
        scanf("%d" , &arr[i]) ;
    }

    printf("\nNormal Array Is :\n\n") ;

    for(i=0 ; i<n ; i++)
    {
        printf("Element %d : %d\n" , i+1 , arr[i]) ;
    }

    printf("\nEnter the number you want to insert : ") ;
    scanf("%d" , &num) ;

    printf("\nEnter the position : ") ;
    scanf("%d" , &pos) ;

    for(i=n ; i>=pos ; i--)
    {
        arr[i+1] = arr[i] ;
    }
    arr[pos] = num ;
    n++ ;

    printf("After Inserting , the Array Is : \n") ;

    for(i=0 ; i<n ; i++)
    {
        printf("Element %d : %d\n" , i+1 , arr[i]) ;
    }


    return 0;
}
