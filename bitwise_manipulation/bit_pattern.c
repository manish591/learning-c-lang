#include <stdio.h>

void printBitPattern(int num)
{
  while (num != 0)
  {
    int bit = num & 1;

    printf("%d ", bit);

    num = num << 1;
  }
}

int main()
{
  printBitPattern(5);
  return 0;
}