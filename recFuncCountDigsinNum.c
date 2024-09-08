#include <stdio.h>
#include <stdlib.h>

int countDigsOfNum(int num) {

    if (num <= 9 && num >= 0)
    {
        return 1;
    }
    else if (num < 0)
    {
        printf("\nOut of Range!\n");
        return 0;
    }
    else return 1 + countDigsOfNum(num/10);
}

int main() {

    int number;

    printf("\nEnter number : ");
    scanf("%d", &number);

    printf("\nNumber of Digs in given number is %d\n", countDigsOfNum(number));

    return 0;
}
