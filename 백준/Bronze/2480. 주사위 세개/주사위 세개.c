#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if (((a > 0) && (a < 7)) && ((b > 0) && (b < 7)) && ((c > 0) && (c < 7)))
	{
		if (a == b && b == c && a == c)
		{
			printf("%d\n", 10000 + 1000 * a);
		}
		else if (a == b || a == c) // a랑 b같으면 실행, a랑 c같으면 실행 -> b랑 c랑 다름
		{
			printf("%d\n", 1000 + 100 * a);
		}
		else if(b == c)
		{
			printf("%d\n", 1000 + 100 * b);
		}
		else if (a != b && b != c && a != c)
		{
			if (a > b && a > c)
			{
				printf("%d\n", 100 * a);
			}
			else if (b > a && b > c)
			{
				printf("%d\n", 100 * b);
			}
			else if (c > a && c > b)
			{
				printf("%d\n", 100 * c);
			}
		}
	}
	return 0;
}