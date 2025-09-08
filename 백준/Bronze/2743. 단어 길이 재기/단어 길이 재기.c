#include <stdio.h>


int main(void) {

	char arr[100];
	int cnt = 0;
	scanf("%s", arr);
	for (int i = 0; i < 100; i++) {
		if (arr[i] != '\0') cnt++;
		else break;
	}
	printf("%d", cnt);

	return 0;
}