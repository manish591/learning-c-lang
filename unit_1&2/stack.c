#include <stdio.h>
#define MAX_SIZE 10

int STACK[MAX_SIZE];
int top = -1;

void push(int item)
{
  if (top >= MAX_SIZE - 1)
  {
    printf("Overflow! \n");
  }
  else
  {
    STACK[++top] = item;
  }
}

void pop()
{
  if (top <= -1)
  {
    printf("Underflow! \n");
  }
  else
  {
    top--;
  }
}

void peek()
{
  if (top <= -1)
  {
    printf("The stack is empty! \n");
    return;
  }
  printf("The top element is: %d \n", STACK[top]);
}

void display()
{
  if (top <= -1)
  {
    printf("The stack is empty! \n");
    return;
  }
  printf("Displaying all the elements: \n");
  for (int i = 0; i <= top; i++)
  {
    printf("%d ", STACK[i]);
  }
}

int main()
{
  push(5);
  push(10);
  push(7);
  display();
  pop();
  pop();
  display();
  pop();
  pop();
  display();
  return 0;
}