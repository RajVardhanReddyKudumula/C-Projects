
//Grade Calculator of 3 Subjects

#include <stdio.h>
#include <stdlib.h>

int main () {

    int g1, g2, g3;       //The grade of first, second  and third subs.

    printf("\nPlease Enter the Makrs of G1 : \n");
    scanf("%d", &g1);
    printf("\nPlease Enter the Makrs of G2 : \n");
    scanf("%d", &g2);
    printf("\nPlease Enter the Makrs of G3 : \n");
    scanf("%d", &g3);
    
    double fg = (((double)g1+g2+g3)/3); //Implicit Casting...!

    printf("\nThe Average of your grade is %f \n", fg);
    printf("\n");

    return 0;

}
