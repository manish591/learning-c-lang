#include <stdio.h>
#include <stdlib.h>

struct NODE
{
  int value;
  struct NODE *next;
};

struct NODE *head = NULL;

int getSize()
{
  struct NODE *temp;
  temp = head;
  int size = 0;

  while (temp != NULL)
  {
    size++;
    temp = temp->next;
  }

  return size;
}

void insertBegin(int val)
{
  struct NODE *node = (struct NODE *)malloc(sizeof(struct NODE));
  node->value = val;
  node->next = head;
  head = node;
}

void insertLast(int val)
{
  if (head == NULL)
  {
    insertBegin(val);
  }
  else
  {
    struct NODE *node = (struct NODE *)malloc(sizeof(struct NODE));
    node->value = val;
    node->next = NULL;

    struct NODE *temp;
    temp = head;

    for (int i = 1; i < getSize(); i++)
    {
      temp = temp->next;
    }

    temp->next = node;
  }
}

void display()
{
  if (getSize() == 0)
  {
    printf("The list is empty! \n");
  }
  else
  {
    struct NODE *temp;
    temp = head;

    while (temp != NULL)
    {
      printf("%d ", temp->value);
      temp = temp->next;
    }
    printf("\n");
  }
}

void insertAtPosition(int value, int position)
{
  if (position == 0)
  {
    insertBegin(value);
  }
  else if (position == getSize())
  {
    insertLast(value);
  }
  else
  {
    struct NODE *node = (struct NODE *)malloc(sizeof(struct NODE));
    node->value = value;

    struct NODE *temp;
    temp = head;

    for (int i = 1; i < position; i++)
    {
      temp = temp->next;
    }

    node->next = temp->next;
    temp->next = node;
  }
}

void deleteFront()
{
  if (getSize() == 0)
  {
    printf("Cannot perform delete operation as List is empty! \n");
  }
  else
  {
    struct NODE *temp;
    temp = head;

    head = temp->next;
    temp->next = NULL;

    free(temp);
  }
}

void deleteLast()
{
  if (head == NULL)
  {
    printf("Cannot perform delete operation as List is empty! \n");
  }
  else if (head->next == NULL)
  {
    free(head);
    head = NULL;
  }
  else
  {
    struct NODE *temp;
    temp = head;

    for (int i = 1; i < getSize() - 1; i++)
    {
      temp = temp->next;
    }

    printf("The temp is: %d \n", temp->value);

    free(temp->next);
    temp->next = NULL;
  }
}

void deleteAtPosition(int position)
{
  if (position == 0)
  {
    deleteFront();
  }
  else if (position == getSize() - 1)
  {
    deleteLast();
  }
  else
  {
    struct NODE *temp;
    temp = head;

    for (int i = 1; i < position; i++)
    {
      temp = temp->next;
    }

    struct NODE *ptr;
    ptr = temp->next;

    temp->next = temp->next->next;
    ptr->next = NULL;
    free(ptr);
  }
}

int searchElement(int value)
{
  struct NODE *temp;
  temp = head;
  int index = 0;

  while (temp != NULL)
  {
    if (temp->value == value)
    {
      return index;
    }
    index++;
    temp = temp->next;
  }
  return -1;
}

int main()
{
  insertBegin(5);
  insertBegin(10);
  insertBegin(101);
  insertLast(40);
  // insertLast(401);
  // insertAtPosition(52, 2);
  // deleteFront();
  // deleteLast();
  // deleteAtPosition(2);
  display();
  printf("The 101 is at index %d \n", searchElement(101));
  return 0;
}