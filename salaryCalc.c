
#include <stdlib.h>
#include <stdio.h>

int main() {

    int salary, noOfHrs, salary4Month;

    printf("\nEnter the Salary you earn(Per Hour) : ");
    scanf("%d", &salary);

    printf("\nEnter the No. of hours you work(Per Month) : ");
    scanf("%d", &noOfHrs);
    
    salary4Month = salary*noOfHrs;

    printf("\nTotal Salary you Earn : %d", salary4Month);
    printf("\n");
    return 0;
}
