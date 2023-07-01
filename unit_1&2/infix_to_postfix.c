#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACK_SIZE 10

int OPERATOR_STACK[STACK_SIZE];
int top = -1;

void push(char operator)
{
  if (top >= STACK_SIZE - 1)
  {
    printf("Overflow! \n");
  }
  else
  {
    OPERATOR_STACK[++top] = operator;
  }
}

void pop()
{
  if (top <= -1)
  {
    printf("Underflow \n");
  }
  else
  {
    top = top - 1;
  }
}

void display()
{
  if (top <= -1)
  {
    printf("The stack is empty! \n");
  }
  else
  {
    printf("The elements are: ");
    for (int i = 0; i <= top; i++)
    {
      printf("%d ", OPERATOR_STACK[i]);
    }
  }
}

int checkPrecedence(char op)
{
  if (op == '^')
  {
    return 3;
  }
  else if (op == '%' || op == '/' || op == '*')
  {
    return 2;
  }
  else if (op == '+' || op == '-')
  {
    return 1;
  }
}

int isOperator(char op)
{
  if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
  {
    return 1;
  }
  return 0;
}

char *infixToPostfix(char *infixExpression, int size)
{
  char *postfixExpression = (char *)malloc(sizeof(char) * (size + 2));

  int j = 0;

  for (int i = 0; i < size; i++)
  {
    if (infixExpression[i] == ' ' || infixExpression[i] == '\t')
    {
      continue;
    }

    if (isalnum(infixExpression[i]))
    {
      postfixExpression[j++] = infixExpression[i];
    }

    if (isOperator(infixExpression[i]))
    {
      while (top >= -1 && checkPrecedence(OPERATOR_STACK[top]) >= checkPrecedence(infixExpression[i]))
      {
        postfixExpression[j++] = OPERATOR_STACK[top--];
      }
      OPERATOR_STACK[++top] = infixExpression[i];
    }
  }

  return postfixExpression;
}

int main()
{
  char infix[] = "a+b*c+d";
  char *output = infixToPostfix(&infix, 7);
  printf("The postfix expression is %s", output);
  return 0;
}