#include <stdio.h>

int main()
{
    int num[5] ;
    int i , sum = 0 ;

    printf("Enter five integer numbers \n\n") ;
    for(i=0 ; i<5 ; i++)
    {
        printf("Number - %d : ",i) ;
        scanf("%d",&num[i]) ;
        sum = sum+num[i] ;
    }

   printf("\nYour numbers are :\n") ;
   for(i=0 ; i<5 ; i++)
   {
       printf(" %d ",num[i]) ;
   }
    printf("\n\n") ;
   printf("Total is : %d",sum) ;

    return 0;
}
