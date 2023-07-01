#include <stdio.h>
#include <stdlib.h>

struct NODE
{
  int data;
  struct NODE *left;
  struct NODE *right;
};

struct NODE *root = NULL;

void postOrderTraversal(struct NODE *root)
{
  if (root == NULL)
  {
    return;
  }

  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  printf("%d ", root->data);
}

int main()
{
  return 0;
}