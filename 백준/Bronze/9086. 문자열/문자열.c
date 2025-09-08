#include <stdio.h>

int main(void) {

	char arr[1000];
	int num = 0;
	int cnt = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", arr);
		for (int i = 0; i < 1000; i++) {
			if (arr[i] != '\0') cnt++;
			else break;
		}
		printf("%c", arr[0]);
		printf("%c", arr[cnt-1]);
		printf("\n");
		cnt = 0;
	}

	return 0;
}