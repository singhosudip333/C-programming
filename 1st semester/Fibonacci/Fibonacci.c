#include <stdio.h>
int main()
{
    int i , n , num1=0 , num2=1 , sum ;
    printf("Enter the number of terms: ") ;
    scanf("%d", &n);

    printf("\nFibonacci Series:  ") ;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", num1 );
        sum = num1 + num2 ;
        num1 = num2 ;
        num2 = sum ;
    }
    return 0;
}
