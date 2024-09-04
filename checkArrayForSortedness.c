#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

#define SIZE 5

int main() {

    int i;
    int arr[SIZE] = {0};

    for (i = 0; i < SIZE; i++)
    {
        printf("\nNumber %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] < arr[i+1])
        {
            printf("\nThe Array is really sorted");   
        } 
        else if (arr[i] <= arr[i+1])
        {
            printf("\nThe Array is just sorted");
        }
        else {
            printf("\nThe Array is not sorted");
        }
    return 0;
    }
}
