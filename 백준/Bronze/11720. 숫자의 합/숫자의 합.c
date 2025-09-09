#include <stdio.h>


int main(void) {

	char arr[100];
	int num = 0;
	int sum = 0;
	scanf("%d", &num);
	scanf("%s", arr);

	for (int i = 0; i < num; i++) {
		sum += arr[i] - '0';
	}
	printf("%d", sum);

	return 0;
}