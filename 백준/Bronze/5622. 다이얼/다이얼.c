#include <stdio.h>
#include<string.h>

int main(void) {

	char arr[15];
	scanf("%s", arr);
	int index = 0;
	int sum = 0;
	char *parr = arr;

	int time[26] = {
	3,3,3,   // A B C
	4,4,4,   // D E F
	5,5,5,   // G H I
	6,6,6,   // J K L
	7,7,7,   // M N O
	8,8,8,8, // P Q R S
	9,9,9,   // T U V
	10,10,10,10 // W X Y Z
	};

	while (*parr != '\0') {
		index = *parr - 'A';
		sum += time[index];
		parr++;
	}
	printf("%d", sum);

	return 0;
}