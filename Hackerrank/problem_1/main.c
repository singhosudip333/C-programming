#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float x, y;

    int sum_one, difference_one;
    float sum_two, difference_two;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);

    sum_one = a + b;
    difference_one = a - b;

    sum_two = x + y;
    difference_two = x - y;

    printf("%d %d\n", sum_one, difference_one);
    printf("%.1f %.1f", sum_two, difference_two);

    return 0;
}
