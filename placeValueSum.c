#include <stdlib.h>
#include <math.h>
#include <stdio.h>

//We should find the difference between Sum of All Odd and All Even.

int main() {
    int evnSum=0, oddSum=0, num, holdDigit;

    printf("\nEnter a num : ");
    scanf("%d", &num);

    while (num > 0)
    {
        holdDigit = num%10;
        if (holdDigit%2!=0)
        {
            oddSum = oddSum + holdDigit;               
        }
        else {
            evnSum = evnSum + holdDigit;
        }
            num = num/10;      
    }
    
    printf("\n%d is the difference.", oddSum - evnSum);

    return 0;
}
