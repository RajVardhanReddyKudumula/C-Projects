//calculate factorial of a given num.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int num) {

    int i, resultFactorial = 1;

    for ( i = num; i > 0; i--)
    {
        resultFactorial = resultFactorial*i;
    }
    
    return resultFactorial;
}

int main() {

    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    printf("The Factorial of a given number is %d", factorial(number));

    return 0;
}
