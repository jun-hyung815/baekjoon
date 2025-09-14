#include <stdio.h>


int main(void) {

	int t = 0;
	scanf("%d", &t);

	while (t--) {
		int cnt = 0;
		char arr[21];
		scanf("%d %s", &cnt, arr);
		for (int i = 0; arr[i] != '\0'; i++) {
			for (int j = 0; j < cnt; j++) {
				printf("%c", arr[i]);
			}
		}
		printf("\n");
	}
	return 0;
}