#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j , n , temp , arr[100] ;
    printf("Enter Array Size : ");
    scanf("%d", &n) ;

    for(i=0 ; i<n ; i++)
    {
        printf("Element : ") ;
        scanf("%d", &arr[i] ) ;
    }

    for(i=0 ; i<n-1 ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }

    printf("\nAfter sorting for Acending to Decending the Array Is :") ;
    for(i=0 ; i<n ; i++)
    {
        printf("%d " , arr[i]) ;
    }

    return 0;
}
