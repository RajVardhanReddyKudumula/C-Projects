//Calculator for two numbers

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2;
    char symbol_arithmetic;

    printf("\nEnter the Symbol of Mathematical operation(+, - , *, /) : ");
    scanf("%c", &symbol_arithmetic);

    printf("\nEnter first number : ");
    scanf("%d", &num1);

    printf("\nEnter second number : ");
    scanf("%d", &num2);
    

    switch(symbol_arithmetic)
    {
        case '+':
            printf("\nThe sum of 2 numbers = %d", num1+num2);
            break;
        case '-':
            ("\nThe difference of 2 numbers = %d", num1-num2);
            break;
        case '*':
            printf("\nThe product of 2 numbers = %d", num1*num2);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("We can't divide a number with 0");
            }
            else printf("\nThe division of 2 numbers = %d", num1/num2);
            break;
         default: printf("\nSorry, Try Again...");
          break;
    }
    printf("\n\n");

    return 0;
}
