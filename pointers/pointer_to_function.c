#include <stdio.h>

int add(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

void performOperation(int (*operation)(int, int), int x, int y)
{
  int result = operation(x, y);
  printf("The output operation is: %d \n", result);
}

int main()
{
  int (*operationPtr)(int, int);

  operationPtr = &add;
  performOperation(operationPtr, 5, 4);

  operationPtr = &subtract;
  performOperation(operationPtr, 5, 4);

  return 0;
}