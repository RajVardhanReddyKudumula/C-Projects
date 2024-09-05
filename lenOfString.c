#include <stdio.h>
#include <stdlib.h>

int lenStr(char *str) {

    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    
    return i;
}

int main() {

    int strlength;
    char string[100];

    printf("\nEnter the Name : ");
    gets(string);

    strlength = lenStr(string);

    printf("\nLength of String is '%s' is %d \n", string, strlength);

    return 0;
}
