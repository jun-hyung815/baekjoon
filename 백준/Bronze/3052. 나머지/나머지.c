#include <stdio.h>

int main()	
{
	int arr = 0;
	int check[42] = { 0, };
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr);
		check[arr % 42] = 1;
	}
	for (int i = 0; i < 43; i++) {
		if (check[i] == 1)
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}