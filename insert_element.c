#include <stdio.h>

int *insertElement(int arr[], int *size, int position, int value)
{
  *size = *size + 1;

  for (int i = *size - 1; i >= position - 1; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[position - 1] = value;

  return arr;
}

int main()
{
  int size;

  printf("Enter arr size: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter arr elements ");

  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  int *result = insertElement(arr, &size, 2, 10);

  printf("\n The resultant arr is: \n");

  for (int i = 0; i < size; i++)
  {
    printf("%d ", *(result + i));
  }

  return 0;
}