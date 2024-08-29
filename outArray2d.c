#include <stdio.h>
#include <stdlib.h>

int main() {

    int a2DArray[2][3], i, j, k;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter element : ");
            scanf("%d", &a2DArray[i][j]);
        }
    }

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d", a2DArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
