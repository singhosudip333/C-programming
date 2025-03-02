#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =0;
    int sum =0;

    scanf("%d",&n) ;
    int *arr = (int*)malloc(n *sizeof(int)) ;

    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]) ;
        sum+=arr[i] ;
    }
    printf("%d",sum) ;
    return 0;
}
