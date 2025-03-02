#include<stdio.h>

int main()
{
    int a,b,row ;

    printf("Enter row number : ") ;
    scanf("%d",&row);

    for(a=1; a<=row; a++)
    {
        for(b=1; b<=a; b++)
            printf("%d ",b );
            printf("\n" );
    }
    return 0;
}
