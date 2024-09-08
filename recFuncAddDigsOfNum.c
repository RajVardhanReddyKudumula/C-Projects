#include <stdio.h>
#include <stdlib.h>

int addDigsOfNum(int num) {

    if (num <= 9 && num >= 0)
    {
        return num;
    }
    else if (num < 0)
    {
        printf("\nOut of Range!\n");
        return 0;
    }
    else return num%10 + addDigsOfNum(num/10);
}

int main() {

    int number;

    printf("\nEnter number : ");
    scanf("%d", &number);

    printf("\nResult is %d\n", addDigsOfNum(number));

    return 0;
}
