#include <stdio.h>

int main(void)
{
	int arr[100] = { 0, };
	int count = 0;
	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		else if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	for (int i = 0;i < 9;i++)
	{
		count++;
		if (arr[i] == max)
		{
			printf("%d", count);
		}
	}
	return 0;
}