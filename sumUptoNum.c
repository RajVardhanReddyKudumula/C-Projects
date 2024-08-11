#include <stdlib.h>
#include <stdio.h>

int main() {
    int num, sum = 0, i;

    printf("\nEnter a number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("\nThe Sum is %d\n", sum);
    printf("\n");
    
    return 0;
}
