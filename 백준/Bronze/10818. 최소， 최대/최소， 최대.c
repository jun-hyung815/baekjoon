#include <stdio.h>

int main(void)
{
	int N = 0;
	int arr[1000000] = { 0, };

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i <N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("%d %d", min, max);

	return 0;
}