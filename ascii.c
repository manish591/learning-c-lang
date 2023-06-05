#include <stdio.h>

int main()
{
  // int arr[3][3] = {{1, 2, 3}, {4, 7, 8}, {9, 6, 4}};
  // int(*ptr)[3] = arr;

  // printf("Printing ptr elements! \n");

  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     printf("Element at index i = %d and j = %d is: %d. \n", i, j, *(*(ptr + i) + j));
  //   }
  // }

  int arr[3][3] = {{1, 2, 3}, {4, 7, 8}, {9, 6, 4}};

  int *arr1 = (int *)malloc(sizeof(int) * 10);

  return 0;
}