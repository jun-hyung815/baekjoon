#include <stdio.h>

int main(void)
{
	int H, M;
	scanf("%d%d", &H, &M);

	if (H == 0 && M < 45)
	{
		printf("%d %d", H + 24 - 1, M + 60 - 45);
	}
	else if (H > 0 && M < 45)
	{
		printf("%d %d", H - 1, M + 60 - 45);
	}
	else
	{
		printf("%d %d", H, M - 45);
	}
	return 0;
}