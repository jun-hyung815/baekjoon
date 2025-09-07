#include <stdio.h>


int main(void) {

	int n;
	int max = 0;
	double result = 0;
	int real_score[1000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &real_score[i]);
		if (real_score[i] > max) max = real_score[i];

	}
	if (max == 0) {
		printf("0.00\n");
		return 0;
	}
	for (int i = 0; i < n; i++) {
		result += ((double)real_score[i] / max) * 100.0;
	}

	printf("%.2f\n", result / n);
	return 0;
}