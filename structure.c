#include <stdio.h>

struct Student
{
  unsigned int data1 : 1;
  unsigned int data2 : 1;
};

union BCA
{
  char myName;
};

int main()
{
  printf("The size of structure is: %d", sizeof(struct Student));
  printf("The size of union BCA is: %d", sizeof(union BCA));
  return 0;
}