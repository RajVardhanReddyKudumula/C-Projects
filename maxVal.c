#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int arr[] = { 1, 4, 0, 2, 9, 4, 5};
    int i, max;

    max = arr[0];
    
    for ( i = 0; i < 7; i++)
    {
        max = arr[i];
    }

    printf("\nMax Digit in your phone number is: %d \n", max);    

    return 0;
}