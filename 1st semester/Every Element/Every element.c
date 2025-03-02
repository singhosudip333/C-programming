#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100] ;
    int i , count=0 ;

    printf("Enter a line : ") ;
    gets (str) ;

    printf("\nYou have entered : ") ;
    puts (str) ;

    printf("\n") ;
    for(i=0 ; str[i] != '\0' ; i++)
    {
        printf(" %c\n" , str[i]) ;
        count++ ;
    }
    printf("\nLenght is : %d\n" , count) ;

    return 0;
}
