#include <stdio.h>
#define MAX 10

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
  display();
  dequeue();
  display();
  return 0;
}