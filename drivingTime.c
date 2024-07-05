
#include <stdio.h>
#include <stdlib.h>

int main() {

    float distance, avgSpeed, time;

    printf("\nEnter the distance between the Source and Destination : ");
    scanf("%f", &distance);

    printf("\nEnter the Average Speed of the Vehicle : ");
    scanf("%f", &avgSpeed);

    time = distance/avgSpeed;

    printf("\nTime taken to reach destination : %.3f \n", time);
    printf("\n");

    return 0;
}
