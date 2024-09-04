#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {

    int i;
    int arr[SIZE] = {0};
    int temp1;

    for (i = 0; i < SIZE; i++)
    {
        printf("\nValue %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    temp1 = arr[0];

    for (i = 1; i < SIZE; i++) {
        arr[i-1] = arr[i];
    }

    arr[SIZE - 1] = temp1;

    for (i = 0; i < SIZE; i++)
    {
        printf("\nRe-Val %d : %d", i+1, arr[i]);
    }
    

    return 0;
}
