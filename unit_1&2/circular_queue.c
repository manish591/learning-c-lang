#include <stdio.h>
#define MAX 5

int QUEUE[MAX];
int front, rear = -1;

void enqueue(int data)
{
  if (rear >= MAX - 1)
  {
    printf("Overflow! \nS");
  }
  else
  {
    if (front == -1)
    {
      front++;
    }
    QUEUE[++rear] = data;
    rear = rear % (MAX - 1);
    printf("rear %d  \n", rear);
  }
}

void dequeue()
{
  if (front <= -1)
  {
    printf("Underflow! \n");
  }
  else
  {
    front++;
    printf("Feont %d  ", front);
    front = front % (MAX - 1);
  }
}

void display()
{
  printf("Displaying elements! ");
  for (int i = front; i <= rear; i++)
  {
    printf("%d ", QUEUE[i]);
  }
  printf("\n");
}

int main()
{
  enqueue(47);
  enqueue(78);
  enqueue(474);
  enqueue(778);
  enqueue(89);
  display();
  dequeue();
  enqueue(31);
  display();
  return 0;
}