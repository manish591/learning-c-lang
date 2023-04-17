#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

int STACK[SIZE];
int TOP = -1;

void push(int num)
{
  if (TOP >= SIZE - 1)
  {
    printf("Overflow!");
  }
  else
  {
    TOP += 1;
    STACK[TOP] = num;
  }
}

int pop()
{
  int poppedElement;

  if (TOP <= -1)
  {
    printf("Undeflow!");
  }
  else
  {
    poppedElement = STACK[TOP];
    TOP -= 1;
  }
  return poppedElement;
}

int peek()
{
  return STACK[TOP];
}

int checkPrecedence(char operator)
{
  if (operator== '+' || operator== '-')
  {
    return 1;
  }
  else if (operator== '*' || operator== '/')
  {
    return 2;
  }
  return -1;
}

char *infixToPostfix(char *expression)
{
  int j = 0;
  char *result = (char *)malloc(sizeof(char) * (8 + 2));

  for (int i = 0; i < 7; i++)
  {
    if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
    {
      int isOperatorPresent = (char)peek() == '+' || (char)peek() == '-';
      if (isOperatorPresent)
      {
        result[j++] = pop();
        printf("The result is %s \n", result);
        printf("The peak is %d \n", peek());
        push((int)expression[i]);
        printf("The peak is %d \n", peek());
      }
      else
      {
        push((int)expression[i]);
      }
    }
    else
    {
      result[j++] = expression[i];
    }
  }

  while (TOP != -1)
  {
    result[j++] = pop();
  }

  result[j] = '\0';

  return result;
}

int main()
{
  char expression[10] = "A+B-C+D";

  char *result = infixToPostfix(expression);

  printf("%s", result);

  return 0;
}