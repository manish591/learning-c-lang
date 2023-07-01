#include <stdio.h>
#include <stdlib.h>

struct NODE
{
  int data;
  struct NODE *next;
};

struct NODE *top = NULL;

void push(int data)
{
  struct NODE *temp = (struct NODE *)malloc(sizeof(struct NODE));
  temp->data = data;

  if (top == NULL)
  {
    temp->next = NULL;
  }
  else
  {
    temp->next = top;
  }

  top = temp;
}

void pop()
{
  if (top == NULL)
  {
    printf("Underflow! \n");
  }
  else
  {
    struct NODE *temp;
    temp = top;

    top = top->next;

    free(temp);
  }
}

void display()
{
  struct NODE *temp = (struct NODE *)malloc(sizeof(struct NODE));

  temp = top;

  printf("Printing Data: ");

  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }

  printf("\n");
}

int main()
{
  push(5);
  push(45);
  push(57);
  push(74);
  push(31);
  pop();
  display();
  return 0;
}