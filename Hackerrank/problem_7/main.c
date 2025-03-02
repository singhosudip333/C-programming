#include <stdio.h>

int main()
{
    int n, i, temp, sum = 0;

    printf("Enter a number - ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        temp = n % 10;
        sum = sum + temp;
        n = n / 10;
    }

    printf("%d", sum);
}
