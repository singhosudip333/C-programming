#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i=1;

    printf("Enter Last number : ") ;
    scanf("%d",&num) ;
    printf("Odd number's are - \n") ;
    do
        {
            if (i%2 == 0)
            {
                printf("%d \n" ,i) ;
            }
            i++;
        }
        while(i <= num) ;

    return 0;
}
