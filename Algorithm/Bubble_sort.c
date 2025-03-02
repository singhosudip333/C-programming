#include <stdio.h>

void bubble_sort(int arr[] , int size)
{
    int temp = 0 ;

    if(size==1)
        return ;

    for(int i=0 ; i<size ; i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i] ;
            arr[i] = arr[i+1] ;
            arr[i+1] = temp ;
        }
        bubble_sort(arr , size-1) ;

    }

}

int main()
    {
        int n, i, j, temp, arr[100];

        printf("Enter Array Size : ");
        scanf("%d", &n);

        printf("\nBefore Bubble Sort - ") ;

        for (size_t i = 0; i < n; i++)
        {
            arr[i] = rand()%100 ;
            printf("%d " , arr[i]) ;
        }

        bubble_sort(arr , n - 1);

        printf("\nAfter Bubble Sort -  ") ;

        for ( i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
