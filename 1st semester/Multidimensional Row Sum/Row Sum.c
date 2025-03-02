#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[3] [3] ;
    int i , j , sum ;

// INPUT
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("Number : ") ;
            scanf("%d" , &num[i] [j]) ;
        }
    }
// OUTPUT
    printf("\n\n") ;

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d " , num[i] [j]) ;
        }
        printf("\n") ;
    }

    printf("\n\n") ;
// TOTAL
    for(i=0 ; i<3 ; i++)
    {
        sum=0 ;
        for(j=0 ; j<3 ; j++)
        {
            sum = sum + num[i] [j] ;
        }
        printf("Total of number %d row is : %d" , i , sum) ;
        printf("\n") ;
    }

    printf("\n\n") ;
    return 0;
}
