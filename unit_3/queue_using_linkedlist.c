#include <stdio.h>
#include <stdlib.h>

struct NODE
{
  int data;
  struct NODE *next;
};

struct NODE *front = NULL;
struct NODE *rear = NULL;

void enqueue(int data)
{
  struct NODE *node = (struct NODE *)malloc(sizeof(struct NODE));
  node->data = data;
  node->next = NULL;

  if (front == NULL)
  {
    front = node;
    rear = node;
  }
  else
  {
    rear->next = node;
    rear = node;
  }
}

void dequeue()
{
  if (front == NULL || rear == NULL)
  {
    printf("Underflow! \n");
  }
  else
  {
    struct NODE *temp;
    temp = front;

    front = temp->next;
    temp->next = NULL;
    free(temp);
  }
}

void display()
{
  struct NODE *temp;
  temp = front;

  printf("Printing data: ");

  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }

  printf("\n");
}

int main()
{
  enqueue(78);
  enqueue(74);
  enqueue(31);
  display();
  dequeue();
  display();
  return 0;
}