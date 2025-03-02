#include <stdio.h>

int linear_search(int arr[] , int size , int item)
{
    if(size < 0)
        return -1 ;

    if(arr[size]==item)
        return size ;

    return linear_search(arr , size-1 , item) ;
}

int main()
{
    int n , arr[100] , item , i ;

    printf("Enter Array Size : ") ;
    scanf("%d" , &n) ;

    printf("Array is : ") ;

    for(i=0 ; i<n ; i++)
    {
        arr[i] = rand()%100 ;
        printf("%d " , arr[i]) ;
    }

    printf("\nEnter Search Item : ") ;
    scanf("%d" , &item) ;

    int result = linear_search(arr , n , item) ;

    if(result== -1)
        printf("Item not found !") ;
    else
        printf("Item found in %d position" , result+1) ;
}
