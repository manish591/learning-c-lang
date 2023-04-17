#include <stdio.h>

int *bubbleSort(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return arr;
}

int main()
{
  int arr[5] = {4, 2, 8, 5, 3};

  int *ptr = bubbleSort(arr, 5);

  for (int i = 0; i < 5; i++)
  {
    printf("%d ", *(ptr + i));
  }

  return 0;
}