#include <stdio.h>
#define MAX 10

struct STACK
{
  int data[MAX];
  int top;
};

void initializeStack(struct STACK *stack)
{
  stack->top = -1;
}

void push(struct STACK *stack, int data) {
  if(stack->top > MAX - 1) {
    printf("Overflow!");
  } else {
    
  }
}

void pop() {

}

int main()
{
  return 0;
}