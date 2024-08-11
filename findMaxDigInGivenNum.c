#include <stdio.h>
#include <stdlib.h>

int findMaxDig(int num) {

    if (num >= 10 && num < 100)
    {
        if (num%10 > num/10)
        {
            printf("Max number in %d is : %d\n", num, num%10);
        }
        else {
            printf("Max number in %d is : %d\n", num, num/10);
        }
        
    }
    else {
        printf("The Number doesn't have 2 digits");
    }

    return (num);
}

int main() {
    findMaxDig(35);
    return 0;
}