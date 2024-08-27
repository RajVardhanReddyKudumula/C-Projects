#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int arrOfMob[9] , i;

    for ( i = 0; i < 10; i++)
    {
        printf("\nEnter number %d = ", i+1);
        scanf("%d", &arrOfMob[i]);
    }

    int addOfMaxVal,  maxVal = arrOfMob[0];

    for ( i = 1; i < 10 ; i++)
    {
        if (arrOfMob[i] > arrOfMob[addOfMaxVal])
        addOfMaxVal = i;
    }

    printf("\nThe Index of Max Value is %d\n", addOfMaxVal);    
    printf("\n");
    
    return 0;
}
