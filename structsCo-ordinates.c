#include <stdio.h>
#include <stdlib.h>

typedef struct points {

    int x,y;

} Points;

void outputPoint(Points p1) {

    printf("\nPoint X = %d", p1.x);
    printf("\nPoint Y = %d\n", p1.y);
}

Points collectPoint() {

    Points firstPoint;

    printf("\nenter X coordinate : ");
    scanf("%d", &firstPoint.x);

    printf("\nenter Y coordinate : ");
    scanf("%d", &firstPoint.y);

    return firstPoint;
}

int main() {

    Points p1 = collectPoint();
    outputPoint(p1);

    return 0;
}
