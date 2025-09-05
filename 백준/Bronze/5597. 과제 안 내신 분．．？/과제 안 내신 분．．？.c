#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int arr[28] = {0,};
    int check[31] = {0,};

    for(int i=0; i<28; i++){
        scanf("%d", &arr[i]);
        check[arr[i]] = 1;
    }
    for(int i=1; i<=30; i++){
        if(check[i] == 0){
            printf("%d\n", i);
        }
    }
}