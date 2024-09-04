#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {

    int i;
    int arr[SIZE] = {0};

    for (i = 0; i < SIZE; i++)
    {
        printf("\nValue %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] != arr[i+1] && arr[i])
        {
            printf("\n%d", arr[i]);
        }
        else if (arr[i] == arr[i+1])
        {
            continue;
        }
    }
       return 0;
}
