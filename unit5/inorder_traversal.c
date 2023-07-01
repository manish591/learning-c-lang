#include <stdio.h>
#include <stdlib.h>

struct NODE
{
  int data;
  struct NODE *left;
  struct NODE *right;
};

struct NODE *root = NULL;

void inorderTraversal(struct NODE *root)
{
  if (root == NULL)
  {
    return;
  }

  inorderTraversal(root->left);
  printf("%d ", root->data);
  inorderTraversal(root->right);
}

int main()
{
  return 0;
}