#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {

    int arr[SIZE], i;

    for (i = 0; i < SIZE; i++)
    {
        printf("\nNumber %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for ( i = SIZE-1; i >= 0; i--)
    {
        printf("\nNumber %d : %d\n", i+1, arr[i]);
    }
    return 0;
}
