#include <stdio.h>

#define MAX_SIZE 5

int front = 0;
int rear = 0;
int size = 0;

int arr[MAX_SIZE];

void isFull()
{
  if (size >= MAX_SIZE)
  {
    printf("Queue is full");
  }
  else
  {
    printf("Queue is empty");
  }
}

void isEmpty()
{
  if (size == 0)
  {
    printf("Queue is empty");
  }
  else
  {
    printf("Queue is not empty");
  }
}

void insert(int item)
{
  if (size >= MAX_SIZE)
  {
    printf("Overflow!");
  }
  else
  {
    arr[rear++] = item;
    size++;
    rear = rear % MAX_SIZE;
  }
}

void dequeue()
{
  if (size == 0)
  {
    printf("Underflow!");
  }
  else
  {
    front++;
    size--;
    front = front % MAX_SIZE;
  }
}

void peek()
{
  printf("The peek is %d", arr[front]);
}

int main()
{
  insert(5);
  insert(10);
  insert(4);
  insert(2);
  insert(7);
  peek();
  dequeue();
  peek();
  return 0;
}