#include <stdio.h>

int getXORFromOneToNum(int num)
{
  if (num % 4 == 0)
  {
    return num;
  }
  else if (num % 4 == 1)
  {
    return 1;
  }
  else if (num % 4 == 2)
  {
    return num + 1;
  }
  else if (num % 4 == 3)
  {
    return 0;
  }
}

int main()
{
  int num = 9;
  int output = getXORFromOneToNum(num);

  printf("The xor of 1^2^3^4^5 is: %d", output);

  return 0;
}