#include <stdio.h>

void insertion_sort(int arr[] , int size)
{

    for(int j=1 ; j<size ; j++)
    {
        int key =arr[j] ;
        int i = j -1 ;
        while(i>=0 && arr[i]>key)
        {
            arr[i+1] = arr[i] ;
            i = i-1 ;
        }
        arr[i+1] = key ;
    }
}

int main()
{
    int n, i, j, temp, arr[100];

        printf("Enter Array Size : ");
        scanf("%d", &n); // Array Size

        printf("\nBefore Insertion Sort - ") ;

        for (size_t i = 0; i < n; i++)
        {
            arr[i] = rand()%100 ;
            printf("%d " , arr[i]) ;
        }

        insertion_sort(arr , n) ;

        printf("\nAfter insertion Sort -  ") ;

        for ( i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
}
