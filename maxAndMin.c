#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2;
    
    printf_s("\nEnter the first number : ");
    scanf_s("%d", &num1);

    printf_s("\nEnter the second Numer : ");
    scanf_s("%d", &num2);

    if (num1 > num2)
    {
        printf_s("\n%d is greater than %d\n", num1, num2);
    }
    else if (num1 == num2)
    {
        printf_s("\n%d and %d are equal in magnitude\n", num1, num2);
    }
    else printf_s("\n%d is greater than %d\n", num2, num1);
    
    printf_s("\nEnd of Program......\n");
    printf_s("\n");
    
    return 0;
}
