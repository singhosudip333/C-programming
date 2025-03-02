#include <stdio.h>

int partition(int arr[] , int start , int end)
{
    int x=arr[end] ;
    int i = start-1 ;

    for(int j=start ; j<end ; j++)
    {
        if(arr[j]<=x)
        {
            i++ ;
            int temp = arr[j] ;
            arr[j] = arr[i] ;
            arr[i] = temp ;
        }
    }
    int temp_2 = arr[end] ;
    arr[end] = arr[i+1] ;
    arr[i+1] = temp_2 ;

    return i+1 ;
}

void Quick_sort(int arr[] ,int start ,int end)
{
    if(start<end)
    {
        int q = partition(arr , start , end) ;
        Quick_sort(arr , start , q-1) ;
        Quick_sort(arr , q+1 , end) ;
    }
}

int main()
{
    int i , n , arr[100] ;

    printf("Enter Array Size : ") ;
    scanf("%d" , &n) ;

    printf("Array is : ") ;

    for(i=0 ; i<n ; i++)
    {
        arr[i] = rand()%100 ;
        printf("%d " , arr[i]) ;
    }

    Quick_sort(arr , 0 , n-1) ;

    printf("\nSorted Array is : ") ;

    for(i=0 ; i<n ; i++)
    {
        printf("%d " , arr[i]) ;
    }
}
