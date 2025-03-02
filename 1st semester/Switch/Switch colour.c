#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch ;

    printf("ENTER COLOR 1ST LETER : ");
    scanf("%c",&ch);

    switch (ch)
    {
        case 'r' :
            {
                printf("Red") ;
                break ;
            }

        case 'g' :
            {
                printf("Green") ;
                break ;
            }

            default:
               printf("Not Matched") ;
    }

    return 0;
}
