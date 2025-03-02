#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[3] [3] ;
    int i , j ;

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("Enter number  : ") ;
            scanf("%d",&num[i] [j]) ;
        }
    }

     printf("\n") ;

     for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d  ",num[i] [j]) ;
        }
        printf("\n\n") ;
    }
    return 0;
}
