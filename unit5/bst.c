#include <stdio.h>
#include <stdlib.h>

struct BST_NODE
{
  int data;
  struct BST_NODE *left;
  struct BST_NODE *right;
};

struct BST_NODE *insertNode(struct BST_NODE *root, int data)
{
  if (root == NULL)
  {
    root = (struct BST_NODE *)malloc(sizeof(struct BST_NODE));
    root->left = NULL;
    root->right = NULL;
    root->data = data;
    return root;
  }

  if (data < root->left->data)
  {
    root->left = insertNode(root->left, data);
  }
  else
  {
    root->right = insertNode(root->right, data);
  }
}

struct BST_NODE *searchNode(struct BST_NODE *root, int data)
{
  if (root == NULL)
  {
    return root;
  }
  else if (root->data == data)
  {
    return root;
  }
  else if (data < root->data)
  {
    return searchNode(root->left, data);
  }
  else
  {
    return searchNode(root->right, data);
  }
}

int main()
{
  struct BST_NODE *root = insertNode(NULL, 74);
  printf("The root data is: %d ", root->data);
  insertNode(root, 86);
  return 0;
}