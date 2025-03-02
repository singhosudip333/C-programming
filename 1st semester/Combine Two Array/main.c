#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  a ,b , c , i ;
    int arr1[100] ;
    int arr2[100] ;
    int main_arr[100] ;


    printf("Enter 1st Array Size : ") ;
    scanf("%d", &a) ;
    for(i=0 ; i<a ; i++)
    {
        printf("Number %d - " , i) ;
        scanf("%d" , &arr1[i]) ;
    }

    printf("\nEnter 2nd Array Size : ") ;
    scanf("%d", &b) ;
    for(i=0 ; i<b ; i++)
    {
        printf("Number %d - " , i) ;
        scanf("%d" , &arr2[i]) ;
    }

    for(i=0 ; i < a ; i++)
    {
        main_arr[i] = arr1[i] ;
        printf("%d " , main_arr[i]) ;
    }

    for(i=0 ; i < b ; i++)
    {
        main_arr[i] = arr2[i] ;
        printf("%d " , main_arr[i]) ;
    }



    return 0;
}
