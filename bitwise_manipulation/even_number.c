#include <stdio.h>

char *isEven(int num)
{
  return (num & 1) == 0 ? "Even" : "Odd";
}

int main()
{
  char *output = isEven(4);

  printf("Number is %s", output);

  return 0;
}