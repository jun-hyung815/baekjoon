#include <stdio.h>

int main(void)
{
	int N, v, c = 0;
	int array[100] = {0,};

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &array[i]);
	}
	scanf("%d", &v);
	for (int i = 0; i < N; i++)
	{
		if (array[i] == v)
		{
			c++;
		}
	}
	printf("%d", c);
	return 0;
}