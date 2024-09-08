#include <stdio.h>
#include <stdlib.h>

int factorial(int num) {
    
    if (num == 1)
        return 1;

    return num*factorial(num-1);
}

int main() {

    int numForFac, result;

    printf("\nInsert your number : ");
    scanf("%d", &numForFac);

    result = factorial(numForFac);

    printf("\nResult is %d\n", result);

    return 0;
}
