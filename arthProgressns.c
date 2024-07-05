
#include <stdlib.h>
#include <stdio.h>

int main() {
    
    float a, cd;
    float n;

    printf("\nPlease enter the first term of the Arthematic Series : ");
    scanf("%f", &a);

    printf("\nPlease enter the common difference of the Arthematic Series : ");
    scanf("%f", &cd);

    printf("\nPlease enter the no. of terms of the Arthematic Series : ");
    scanf("%f", &n);

    float an, sum;

    an = a+((n-1)*cd);  // Prints nth Term of an AP

    printf("\nThe  Last term of the Arthematic Series : %f \n", an);

    sum = (n/2)*(a+an); //Prints sum of the AP

    printf("\nThe Sum of terms of the Arthematic Series : %f \n", sum);
    printf("\n");

    return 0;
}
