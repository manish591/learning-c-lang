#include <stdio.h>

int *bubbleSort(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 1; j < size; j++)
    {
      if (*(arr + j - 1) > *(arr + j))
      {
        int temp = *(arr + j);
        *(arr + j) = *(arr + j - 1);
        *(arr + j - 1) = temp;
      }
    }
  }
  return arr;
}

int main()
{
  int SIZE;

  printf("Enter arr SIZE: \n");
  scanf("%d", &SIZE);

  int arr[SIZE];

  printf("Enter arr elements: \n");

  for (int i = 0; i < SIZE; i++)
  {
    scanf("%d", &arr[i]);
  }

  int *output = bubbleSort(arr, SIZE);

  printf("The element of arr are: \n");

  for (int i = 0; i < SIZE; i++)
  {
    printf("%d ", output[i]);
  }

  return 0;
}