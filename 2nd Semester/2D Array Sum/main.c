#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j,c,d, row, columm, arr1[100][100], arr2[100][100], sum[100][100 ];

    printf("Enter Array Row Size - ");
    scanf("%d", &row) ;

    printf("Enter Array Columm Size - ");
    scanf("%d", &columm) ;

    printf("\nEnter 1st Array - \n");

    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<columm ; j++)
        {
            printf("Element : ") ;
            scanf("%d", &arr1[i][j]) ;
        }
    }

    printf("\nEnter 2nd Array - \n");

    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<columm ; j++)
        {
            printf("Element : ") ;
            scanf("%d" , &arr2[i][j] ) ;
        }
    }

    for (i=0 ; i<row ; i++)
    {
        for (j=0 ; j<columm ; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j] ;
        }
    }

    printf("\nSum of two arrays is : \n") ;

    for (i=0 ; i<row ; i++)
    {
        for (j=0 ; j<columm ; j++)
        {
            printf("%d ", sum[i][j]) ;
        }
        printf("\n") ;
    }

    return 0;
}
