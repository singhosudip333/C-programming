#include <stdio.h>

int main()
{
    int X , sum=0, i;
    scanf("%d", &X);

    for ( i = 0; i < X; i++)
    {
        sum++ ;
    }

    if (sum%2==1)
    {
        printf("YES") ;
    }
    else{
        printf("No") ;
    }


    return 0;
}
