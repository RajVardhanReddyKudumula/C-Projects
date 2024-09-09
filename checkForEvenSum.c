#include <stdio.h>
#include <stdlib.h>

int check4EvenSum(int num) {

    int pHolder;

    if (num < 0)
    {
        if (num % 2 == 0)
        {
            return 1;
        }
        else return 0;
    }

    pHolder = check4EvenSum(num/10);
    
    if (num % 10 % 10 == 0)
    {
        if (pHolder == 1)
        {
            return 1;
        }
        else return 0;
    }

    else 
        if (pHolder == 1)
            return 0;
        else return 1;
}

int main() {

    return 0;
}
