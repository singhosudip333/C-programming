#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , i ;

    printf("Enter last number : ") ;
    scanf("%d",&a) ;

    printf("\n232323Even number's between %d \n", a);
    for(i=1 ; i<=a ; i++)
    {
        if(i%2==1)
        {
            printf("%d \n",i) ;
        }
    }
    return 0;
}
