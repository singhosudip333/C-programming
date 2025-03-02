#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;

    printf("Enter Last number : ") ;
    scanf("%d",&num) ;


    i=1 ;
    do
        {
            if(num%2 == 0)
            {
                printf("%d ," ,num) ;
            }
            i++;
        }
        while(i<=num);
    return 0;
}
