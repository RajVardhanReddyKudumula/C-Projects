#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//Return 1, if the input number is Perfect Number.
//A Perfect Number is a number with a value equals to sumof all of its divisors.

int perfectNum(int numPerfect) {

    int i, adder = 0;

    for ( i = 1; i < numPerfect; i++)
    {
        if (numPerfect%i==0) // Finding out Divisor of a number.
        {
            adder = adder + i;  //Adding up the divisors of a number.

            if (adder == numPerfect) {  //Checking Up if adder and PerfectNumber are same.
                return 1;
        }
        }
    }

    return 0;

}

 int main() {

    int findPerfNum;

    printf("\nEnter a Number (Returns 1 for Perfect Number, 0 otherwise) : ");
    scanf("%d", &findPerfNum);

    printf("\nResult is %d\n", perfectNum(findPerfNum));
    printf("\n");

    return 0;
 }