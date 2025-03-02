#include <stdio.h>
#include <stdlib.h>

int num(int n)
{
        while(n!=0)
    {
        arr[i] = n%2 ;
        n = n/2 ;
        i++ ;
    }
}
int main()
{
    int num , n , i , arr[100] ;

    printf("Enter a decimal number : ") ;
    scanf("%d" , &n) ;



    printf("\nThe Binary Number is : %d" , num(n) ) ;

    for(i=i-1 ; i>=0 ; i--)
    {
        printf("%d " , arr[i]) ;
    }
    printf("\n") ;
    return 0;
}
