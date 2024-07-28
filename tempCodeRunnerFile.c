#include <stdlib.h>
#include <stdio.h>

int main ()
 {
    int marks;
    
    printf("\nEnter the marks : ");
    scanf("%d", &marks);

    if (marks >= 80) {
         printf("Great Marks");

    }
    else { printf("Okay!"); }

    return 0;
 }
