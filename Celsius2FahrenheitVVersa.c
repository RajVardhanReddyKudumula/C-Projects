// Converting to Fahranheit from Celsius Scale

#include <stdlib.h>
#include <stdio.h>

/* int main () {
    float celsiTemp, fahrenTemp;

    printf("\nEnter the Celsius Temperature of your City : ");
    scanf("%f", &celsiTemp);

    fahrenTemp = celsiTemp*1.8 + 32;

    printf("\n \nThe Fahrenheit Temperature is %0.3f", fahrenTemp);
    printf("\n");
    
    return 0;
} */



// Converting to Celsius Scale from Fahreheit

#include <stdlib.h>
#include <stdio.h>

int main () {
    float celsiTemp, fahrenTemp;

    printf("\nEnter the Fahrenheit Temperature of your City : ");
    scanf("%f", &fahrenTemp);

    celsiTemp = (fahrenTemp - 32)/(1.8);

    printf("\n \nThe Celsuis Temperature is %0.3f \n", celsiTemp);
    printf("\n");
    
    return 0;
}


