#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {

    int i, flag = 1, arr[SIZE], j;

    for (j = 0; j < SIZE; j++)
    {
        printf("\nEnter %d value : ", j+1);
        scanf("%d", & arr[j]);
    }
    

    for ( i = 0; i < SIZE/2 ; i++)
    {
        if (arr[i] != arr[SIZE - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    
    if (flag == 1)
    {
        printf("\nThe Array is a palindrome!!\n");
    }
    else {
        printf("\nArray ain't a palindrome\n");
    }

    return 0;
}
