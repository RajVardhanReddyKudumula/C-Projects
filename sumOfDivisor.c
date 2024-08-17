//Sum of Divisors of a given num.

#include <stdlib.h>
#include <stdio.h>

int divisorOfNum(int numForDiv) {

    int i, adder = 0;

    for ( i = 1; i <= numForDiv; i++)
    {
        if (numForDiv%i==0) // Finding out Divisor of a number.
        {
            adder = adder + i;  //Adding up the divisors of a number.
        }
    }
    return adder;
}

int main() {

    int divNum;

    printf("\nEnter a Number : ");
    scanf("%d", &divNum);

    printf("The Sum of Divisors : %d\n", divisorOfNum(divNum));

    return 0;
}
