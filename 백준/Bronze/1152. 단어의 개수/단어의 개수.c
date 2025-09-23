#include <stdio.h>
#include <string.h>

char arr[1000001];

int main(void) {
    fgets(arr, sizeof(arr), stdin);

    size_t len = strlen(arr);
    if (len > 0 && arr[len - 1] == '\n')
        arr[len - 1] = '\0';

    char *parr = arr;
    int cnt = 0;
    int flag = 0;

    while (*parr != '\0') {
        if (*parr == ' ') {
            flag = 0;
        }
        else if (flag == 0) {
            cnt++;
            flag = 1;
        }
        parr++;
    }

    printf("%d\n", cnt);
    return 0;
}
