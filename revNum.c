#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num;

    printf("\nEnter a 3 digit number : ");
    scanf("%d", &num);

    int num100, num10, num1, revNum;

    num100 =  num/100;
    num10 = (num - num100*100)/10;
    num1 = num%10;

    revNum = num1*100+num10*10+num100;

    printf("\nThe Reversed Number : %d \n", revNum);
    printf("\n");

    return 0;
}
