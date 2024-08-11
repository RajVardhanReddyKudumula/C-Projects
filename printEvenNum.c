#include <stdio.h>
#include <stdlib.h>

int main() {
    int i=1, rangeNum, num=1;

    printf("\nEnter the range : ");
    scanf("%d",&rangeNum);

    while (i <= rangeNum) {
        num = num*2;
        printf("%d ", num);
        i++;
    }

    return 0;

}