#include <stdlib.h>
#include <stdio.h>

int main() {
    int num, i;

    printf("\nEnter a number : ");
    scanf("%d", & num);

    for (i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
    
    for (i = num; i > 0; i--)
    {
        printf("%d ", i);
    }
    
    return 0;
}
