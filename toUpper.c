#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char toUpper(char letter) {
    if (letter >= 'a' && letter <= 'z' )
    {
       return letter - 'a' + 'A';
    }
    return -1;
    
}

int main() {

    char alphabet;

    printf("\nEnter any lowercase letter : \n");
    scanf("%c", &alphabet);

    printf("\n%d", toUpper(alphabet));

    return 0;
}
