#include <stdlib.h>
#include <stdio.h>

int charToDig(char hunsChar, char tensChar, char unsChar) {

    int huns, tens, uns;

    if (hunsChar >= '0' && hunsChar <= '9') 
    {
       huns = hunsChar - '0';
    }
    else {
        return 0;
    }

    if (tensChar >= '0' && tensChar <= '9') 
    {
       tens = tensChar - '0';
    }
    else {
        return 0;
    }

    if (unsChar >= '0' && unsChar <= '9') 
    {
       uns = unsChar - '0';
    }
    else {
        return 0;
    }
    
    return huns*100+tens*10+uns;
}

int main() {

    char plHuns, plTens, plUnits;

    printf("\nEnter a digit for 100th, 10th & ones place : ");
    scanf("%c%c%c", &plHuns, &plTens, &plUnits);

    printf("\nResult : %d", charToDig(plHuns, plTens, plUnits));

    return 0;
}
