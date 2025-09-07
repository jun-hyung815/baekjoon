#include <stdio.h>


int main(void) {

	int n = 0, m = 0;
	int arr[101] = { 0, };

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < m; i++) {
		int x = 0, y = 0, temp = 0;
		scanf("%d %d", &x, &y);
		if (y > x) {
			for (int j = 0; j < (y - x + 1) / 2; j++) {
				temp = arr[x - 1 + j];
				arr[x - 1 + j] = arr[y - 1 - j];
				arr[y - 1 - j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}