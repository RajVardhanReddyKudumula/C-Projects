#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float x1, y1, z1, x2, y2, z2;

    printf("\ncoordinates x1 : ");
    scanf("%f", &x1);

    printf("\ncoordinates y1 : ");
    scanf("%f", &y1);

    printf("\ncoordinates z1 : ");
    scanf("%f", &z1);

    printf("\ncoordinates x2: ");
    scanf("%f", &x2);

    printf("\ncoordinates y2 : ");
    scanf("%f", &y2);

    printf("\ncoordinates z2 : ");
    scanf("%f", &z2);

    float dist;
    dist = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) + (z1-z2)*(z1-z2));

    printf("\nThe distance b/w 2 points : %0.3f units \n", dist);
    printf("\n");

    return 0;
}
