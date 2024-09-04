#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 5

int main() {

    int  i;
    int arr[SIZE]={1,2,3,4,5};
    int maxSum = arr[0] + arr[1];
    

    for (i = 1; i < SIZE-1; i++)
    {
        if (maxSum < arr[i] +arr[i+1])
        {
            maxSum = arr[i] + arr[i+1];
        }
    }

    printf("\nMax Sum is %d", maxSum);

    return 0;
}
