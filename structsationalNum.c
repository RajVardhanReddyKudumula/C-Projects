//Example demonstrating struct inside a struct

#include <stdio.h>
#include <stdlib.h>

typedef struct Point {

    int x,y;

} Point;

typedef struct circle {

    Point center;
    double radius;

} Circle;

int main() {

    Point p1 = { 1,2 };
    Circle c1;

    c1.radius = 3.3;
    c1.center = p1;
    c1.center.x = 3;
    c1.center.y = 5;

    printf("\nThe radius of Circle is %0.3f and center is (%d,%d)", c1.radius, c1.center.x, c1.center.y);

    return 0;
}
