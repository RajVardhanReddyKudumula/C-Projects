#include <stdlib.h>
#include <stdio.h>

int main() {
    int preNum, posNum, i, multi;

    printf("\nEnter a number for multiplication : ");
    scanf("%d", &preNum);

    printf("\nEnter a range for multiplication : ");
    scanf("%d", &posNum);


    for (i = 1; i <= posNum; i++)
    {
        multi = preNum*i;
        printf("%d x %d = %d\n", preNum, i, multi);
    }

    printf("\n");
    
    return 0;
}
