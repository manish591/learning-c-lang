#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
    Declaring NULL pointer
    It is a pointer that is initialized to null having address 0
    It is a special address in the memory indicating pointer is intended not to point at anything
  */
  int *ptr = NULL;

  // Trying to access NULL pointer results in NULL pointer exception
  // printf("The null pointer is: %x", ptr);

  /*
    Declaring void pointer, a void pointer is having no data type associated with it
    It can be typecasted to any other data type
    If we try to dereference it without typecasting then it threw an error
  */
  void *ptr2;
  int num = 5;
  ptr2 = &num;

  // If we don't typecast it it will throw an error
  // printf("The value of void pointer typecasted to int is %d", *(int *)ptr2);

  /*
    Declaring wild pointer
    A wild pointer that is not initialized with anything
    If we try to dereference it then program will threw a segmentation fault error or garbage value
  */

  int *wildPtr;

  // printf("Accessing wild pointer %d", *wildPtr);

  /*
    Declaring dangling pointer
    A dangling pointer is a pointer that points to the memory location that has been deleted or released
  */

  int *danglingPtr = (int *)malloc(sizeof(int));

  free(danglingPtr);

  // We will try to access dangling ptr here, it will print garbage value
  // printf("The value at dangling ptr is %d", *danglingPtr);

  // To avoid dangling pointer set it to NULL
  danglingPtr = NULL; // makes dangling pointer = 0

  int numOne = 5;

  char *charPtr = &numOne;

  printf("The value is %c", *charPtr);
}