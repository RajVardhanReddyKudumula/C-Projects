#include <stdio.h>
#include <stdlib.h>

int main() {

    int g1, g2;
    int *pG1, *pG2;

    printf("\nEnter the Grade 1 value : ");
    scanf("%d", &g1);

    printf("\nEnter the Grade 2 value : ");
    scanf("%d", &g2);

    pG1 = &g1;
    pG2 = &g2;

    printf("\nAdress of Grade 1 is :%p\n", *pG1);
    printf("\nAdress of Grade 2 is :%p\n", *pG2);

    return 0;
}
