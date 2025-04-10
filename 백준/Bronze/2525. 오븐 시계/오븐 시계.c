#include <stdio.h>
int main()
{
	int H = 0, M = 0, C=0;

	scanf("%d%d%d", &H, &M, &C);
	
	M = M + C;

	if (M > 59)
	{
		H = H + M / 60;
		M = M % 60;

		if (H > 23)
		{
			H = H-24;
		}

	}

	printf("%d %d", H, M);

	return 0;
}