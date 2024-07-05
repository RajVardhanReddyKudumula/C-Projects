#include <stdlib.h>
#include <stdio.h>

int main() {

    int a,b,c;

    printf_s("\nEnter 3 integers(give space between each number) : ");
    scanf_s("%d %d %d", &a, &b, &c);

    if (a > b && a >c && b > c) 
    {
        printf_s("\n%d is greater, %d is lesser\n", a, c);
    }
    else if (a > b && a > c && b < c) 
    {
        printf_s("\n%d is greater, %d is lesser\n", a, c);
    }
    else if (b > a && b > c && a > c)
    {
        printf_s("\n%d is greater, %d is lesser\n", b, c);
    }
    else if (b > a && b > c && a < c)
    {
        printf_s("\n%d is greater, %d is lesser\n", b, a);
    }
    else if (c > a && c > b && a > b)
    {
        printf_s("\n%d is greater, %d is lesser\n", c, b);
    }
    else printf_s("\n%d is greater, %d is lesser\n", c, a);

    printf_s("\n");

    return 0;
}
