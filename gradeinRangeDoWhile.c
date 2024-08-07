#include <stdio.h>
#include <stdlib.h>

int main() {
    int grade;

    do
    {
        printf("\nEnter a grade : ");
        scanf("%d", &grade);
    } while (grade < 0 || grade > 100);
    
    printf("\nThanks!");

    return 0;
}