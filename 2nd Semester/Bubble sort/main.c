#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, n, num, temp, start, end, mid, arr[100];
	printf("Enter Array Size : ");
	scanf("%d", &n);

	// Input part

	for (i = 0; i < n; i++)
	{
		printf("Element : ");
		scanf("%d", &arr[i]);
	}

	printf("Enter Search item : ");
	scanf("%d", &num);

	//Output Part

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	start = 0;
	end = n - 1;
	mid = (start + end) / 2;

	do {
		if (arr[mid] == num)
		{
			printf("\n%d is found position %d\n", num , mid + 1);
			break;
		}
		else if (arr[mid] < num)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}

		mid = (start + end) / 2;
	}

	while (start <= end);

	if (start > end)
	{
		printf("\n%d is Not found", num);
	}

	return 0;
}
