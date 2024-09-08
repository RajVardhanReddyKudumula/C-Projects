#include <stdio.h>
#include <stdlib.h>

int sumOf(int num) {

    if (num == 1)
    {
        return 1;
    }

    return num + sumOf(num-1);
    
}


int main() {

    int numberForSum, sum;

    printf("\nEnter a number : ");
    scanf("%d", &numberForSum);

    sum = sumOf(numberForSum);

    printf("\nThe Sum is %d", sum);

    return 0;
}
