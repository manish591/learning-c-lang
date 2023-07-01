#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *swapUsingBitwise(int a, int b)
{
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  char message[50];
  sprintf(message, "numone = %d and numtwo = %d", a, b);

  char *output = (char *)malloc(strlen(message) + 1);
  strcpy(output, message);

  return output;
}

int main()
{
  int numOne = 5;
  int numTwo = 7;

  printf("numone = %d and numTwo = %d \n", numOne, numTwo);

  char *output;
  output = swapUsingBitwise(numOne, numTwo);

  printf("%s \n", output);

  return 0;
}