#include <stdio.h>
#include <stdlib.h>

int main() {
    int hrs, mins, secs, rsecs;

    printf("\nEnter total seconds : ");
    scanf("%d", &secs);

    hrs = secs/3600;
    mins = (secs - hrs*3600)/60;
    rsecs = (secs - hrs*3600) % 60;  

    printf("\n%d:%d:%d \n", hrs, mins, rsecs);
    printf("\n");

    return 0;
}
