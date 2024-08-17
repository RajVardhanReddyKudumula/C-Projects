//Calculating derivatives

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// c, x, n are the inputs
// c = constant, x = variable, n = power of X.
//representation  --->   d(c*x^n)/dx =   n*c*x^n-1

int derivative(int c, int n, int x) {
    
    int power = pow(x, n-1);

    return  n*c*power;
}

int main() {

    int constOfVar, numPow, varX;

    printf("\nEnter a constant : \n");
    scanf("%d", &constOfVar);

    printf("\nEnter a value for Variable : \n");
    scanf("%d", &varX);

    printf("\nEnter a Power for Variable : \n");
    scanf("%d", &numPow);

    printf("\nThe Derivative is %d\n", derivative(constOfVar, numPow, varX));
    printf("\n");

    return 0;
}
