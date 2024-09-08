//      Rule for Fibonacci Series...
//      
//      Fn = 0                  if n = 0
//      Fn = 1                  if n = 1
//      Fn = Fn-1 + Fn-2        if n > 1

#include <stdio.h>
#include <stdlib.h>

int fiboSeries(int num) {

    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else if (num < 0)
    {
        return 0;
    }
    else return fiboSeries(num-1) + fiboSeries(num-2);
}

int main() {

    int result, numForfibo;

    printf("\nEnter a number : ");
    scanf("%d", &numForfibo);

    result = fiboSeries(numForfibo);

    printf("\nResult is %d\n", result);
    printf("\n");

    return 0;
}
