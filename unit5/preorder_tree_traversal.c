#include <stdio.h>
#include <stdlib.h>

struct NODE
{
  int data;
  struct NODE *left;
  struct NODE *right;
};

struct NODE *root = NULL;

void preorderTraversal(struct NODE *root)
{
  if (root == NULL)
  {
    return;
  }

  printf("%d ", root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

int main()
{
  return 0;
}