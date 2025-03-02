#include <stdio.h>

int main()
{
	int num, result;

	printf("Enter a number:");
	scanf("%d", &num);

	result = reverse_function(num);
	printf("\nReverse number is :%d", result);
	return 0;
}

int sum = 0, temp;

reverse_function(int num)
{
	if (num)
	{
		temp = num % 10;
		sum = sum *10 + temp;
		reverse_function(num / 10);
	}
	else
		return sum;
	return sum;
}
