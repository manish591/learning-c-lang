#include <stdio.h>

int binarySearch(int *arr, int element, int size)
{
  int start = 0;
  int end = size - 1;

  for (int i = start; i < end; i++)
  {
    int mid = start + ((end - start) / 2);

    if (*(arr + mid) == element)
    {
      return mid;
    }
    else if (*(arr + mid) < element)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int SIZE = 10;

  int arr[10] = {4, 5, 7, 8, 10, 15, 18, 21, 24};

  int output = binarySearch(arr, 5, SIZE);

  printf("The element is at index %d \n", output);

  return 0;
}