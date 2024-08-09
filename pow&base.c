#include <stdlib.h>
#include <stdio.h>

int main() {

    int numB, numP, counter = 1, i;

    printf_s("\nEnter a base number : ");
    scanf_s("%d", &numB);

    printf_s("\nEnter a power number : ");
    scanf_s("%d", &numP);

    for ( i = 1; i<= numP; i++)
    {
        counter = counter*numB;
    }

    printf("\n%d", counter);

    return 0;
}
