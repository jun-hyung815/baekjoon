#include <stdio.h>


int main(void) {
	
	char arr1[4];
	char arr2[4];
	char temp1[1];
	char temp2[1];
	int num1 = 0;
	int num2 = 0;
	int id = 100;
	scanf("%s %s", arr1, arr2);

	temp1[0] = arr1[2];
	arr1[2] = arr1[0];
	arr1[0] = temp1[0];

	temp2[0] = arr2[2];
	arr2[2] = arr2[0];
	arr2[0] = temp2[0];

	for (int i = 0; i < 3; i++) {
		num1 = num1 + (arr1[i] - '0') * id;
		id /= 10;
	}
	id = 100;
	for (int i = 0; i < 3; i++) {
		num2 = num2 + (arr2[i] - '0') * id;
		id /= 10;
	}
	if (num1 > num2)printf("%d", num1);
	else printf("%d", num2);

	return 0;
}