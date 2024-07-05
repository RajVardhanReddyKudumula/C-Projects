#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("\nEnter a 3 digit number : ");
    scanf("%d", &num);

    int num100, num10, num1;

    num100 = num/100;
    num10 = (num-num100*100)/10;
    num1 = (num%10);

    printf("\nThe sum of individual digits : %d \n", num100+num10+num1);
    printf("  \n");

    return 0;
}

