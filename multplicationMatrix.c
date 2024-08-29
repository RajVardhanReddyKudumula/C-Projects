#include <stdlib.h>
#include <stdio.h>

#define SIZE 11 //Defining the size of the Matrix.

int main() {

    int i,j;
    int multiMatrix[SIZE][SIZE];

    for (i = 1; i < SIZE; i++)
    {
        for ( j = 1; j < SIZE; j++)
        {
            multiMatrix[i][j] = i*j;    //Assigning values to the Matrix.
        }
    }

    for (i = 1; i < SIZE; i++)
    {
        for ( j = 1; j < SIZE; j++)
        {
            printf("%d ", multiMatrix[i][j]); //Printing out the matrix.
        }
        printf("\n");
    }
    return 0;
}
