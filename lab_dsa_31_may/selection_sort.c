#include <stdio.h>
#include <stdlib.h>

int *selectionSort(int *arr, int size)
{
  int smallestElement;

  for (int i = 0; i < size - 1; i++)
  {
    smallestElement = i;
    for (int j = i + 1; j < size; j++)
    {
      if (*(arr + j) < *(arr + smallestElement))
      {
        smallestElement = j;
      }
    }

    int temp = *(arr + i);
    *(arr + i) = *(arr + smallestElement);
    *(arr + smallestElement) = temp;
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

  int *output = selectionSort(arr, SIZE);

  printf("The element of arr are: \n");

  for (int i = 0; i < SIZE; i++)
  {
    printf("%d ", output[i]);
  }

  return 0;
}