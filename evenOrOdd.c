#include <stdio.h>
#include <stdlib.h>

int main() {

  int num; 

  printf_s("\nEnter an Integer : ");
  scanf_s("%d", &num);

  if (num % 2 == 0)
  {
    printf_s("\nThe Number is even.\n");
  }
  else printf_s("\nThe Number is Odd\n");  

  printf("\n");  

  return 0; 
}

