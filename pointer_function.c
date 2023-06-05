#include <stdio.h>
#include <stdlib.h>

int main()
{
  // int **arr = (int **)malloc(sizeof(int *) * 3);

  // for (int i = 0; i < 3; i++)
  // {
  //   arr[i] = (int *)malloc(sizeof(int) * 3);
  // }

  int t[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int(*arr)[3] = t;

  printf("The 0th value is: %d", *(*t));

  return 0;
}