#include <stdio.h>

int main(void) {

	char arr[1000];
	int num = 0;
	scanf("%s", arr);
	scanf("%d", &num);
	if (num < 0)return 0;
	printf("%c", arr[num-1]);
	return 0;
}