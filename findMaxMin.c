#include <stdio.h>
#include <stdio.h>

//Function to find Max and Min using Pointers..
// Method called "Passing by  Reference" is used here..

void maxAndMin(int num1, int num2, int *pMax, int *pMin) {

    if (num1 > num2)
    {
        *pMax = num1;
        *pMin = num2;
    }
    else {
        *pMin = num1;
        *pMax = num2;
    }
}

int main() {

    int a, b, max, min;

    printf("\nEnter first Number : ");
    scanf("%d", &a);

    printf("\nEnter second Number : ");
    scanf("%d", &b);

    maxAndMin(a,b, &max, &min);

    printf("\nThe Max number between %d & %d is %d", a,b, max);
    printf("\nThe Min number between %d & %d is %d", a,b, min);

    printf("\n\n");

    return 0;
}
