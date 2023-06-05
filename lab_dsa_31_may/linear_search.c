#include <stdio.h>

int linearSearch(int *arr, int element, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (*(arr + i) == element)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int SIZE;

  printf("Enter arr SIZE: \n");
  scanf("%d", &SIZE);

  int arr[SIZE];

  printf("Enter arr SIZE: \n");

  for (int i = 0; i < SIZE; i++)
  {
    scanf("%d", &arr[i]);
  }

  int output = linearSearch(arr, 5, SIZE);

  printf("The element is at index %d \n", output);

  return 0;
}