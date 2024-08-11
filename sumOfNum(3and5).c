#include<stdlib.h>
#include<stdio.h>

int main() {

    int num, nums = 0, i;

    printf("\nEnter a range : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i%3==0 && i%5==0)
        {
            nums += i;
        }
    }
    
    printf("\n%d is the sum!", nums);

    return 0;
}