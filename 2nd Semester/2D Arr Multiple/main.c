#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f, i, j, c, d, R, C, arr[100][100], arr2[100][100], Multi;

    printf("Enter R & C - ");
    scanf("%d %d", &R, &C);

    printf("\nEnter 1st Array - \n");

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("Element : ");
            scanf("%d", &arr[i][j]);
        }
    }

    Multi = R * C;

        for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            if (arr[i][j] == arr2[i][j])
                break;
            arr2[i][j] = arr[i][j];
        }
    }

    printf("\n");
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n\n");
    }

    printf("\n");
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d ", arr2[i][j]);
        }
    }

    return 0;
}
