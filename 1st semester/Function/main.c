#include <stdio.h>
#include <stdlib.h>

int func (int x)
{
    int i ;
    for(i=0 ; i<5 ;i++)
    {
        printf("&d " , i) ;
    }
    return i ;
}

int main()
{
   printf("Numbers are :") ;

   printf(func) ;
    return 0;
}
