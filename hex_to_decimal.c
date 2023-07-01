#include <stdio.h>

void printOctal(int data)
{
  int octal = 0;
  int temp = data;
  int i = 1;

  while (temp != 0)
  {
    int remainder = temp % 8;

    octal += remainder * i;

    temp = temp / 8;

    i *= 10;
  }

  printf("%d", octal);
}

void printHexadecimal()
{
  int decimal, quotient, i = 0;
  char hexadecimal[100];

  printf("Enter a decimal number: ");
  scanf("%d", &decimal);

  quotient = decimal;

  while (quotient != 0)
  {
    int remainder = quotient % 16;
    if (remainder < 10)
      hexadecimal[i] = remainder + '0'; // Convert to corresponding ASCII character
    else
      hexadecimal[i] = remainder - 10 + 'A'; // Convert to corresponding ASCII character
    quotient = quotient / 16;
    i++;
  }

  printf("Hexadecimal representation: ");

  for (int j = i - 1; j >= 0; j--)
  {
    printf("%c", hexadecimal[j]);
  }

  printf("\n");

  return 0;
}

int main()
{
  int data = 25;

  printOctal(25);

  return 0;
}