#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int money = 0.01, moneyFinal, i, days;

    printf("\nNo. of Days : ");
    scanf("%d", &days);

    for (i = 1; i <= days; i++)
    {
        money = money*2;
        moneyFinal = money;
    }

    printf("\nThe Final amount : %d", moneyFinal);
    
    return 0;
}
