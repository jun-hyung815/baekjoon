#include <stdio.h>

int main(void) {

	char alpha[100];
	char arr[27] = {'a','b','c','d','e','f','g',
	'h','i','j','k','l','m','n','o','p','q','r','s',
	't','u','v','w','x','y','z'};
	int arr1[27];
	int cnt = 0;

	scanf("%s", alpha);
	for (int i = 0; i < 100; i++) {
		if (alpha[i] != '\0') cnt++;
		else break;
	}
	for (int i = 0; i < 26; i++) {
		arr1[i] = -1;
	}
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < 26; j++) {
			if (alpha[i] == arr[j]) {
				if(arr1[j] == -1) arr1[j] = i;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", arr1[i]);
	}

	return 0;
}