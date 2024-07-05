#include <stdio.h>
#include <stdlib.h>

int main() {
    float num;

    printf("\nEnter the Number : ");
    scanf("%f", &num);

    int gfnum;
    gfnum = (double)num;

    printf("\nGIF of the number : %d \n", gfnum);
    
    float frnum;
    frnum = num - gfnum;

    printf("\nThe Fractonal Part of gven number : %0.3f\n", frnum);
    printf("\n");

    return 0;
}
