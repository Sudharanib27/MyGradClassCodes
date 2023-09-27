
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *
create_node (int data)
{
  struct node *new_node = (struct node *) malloc (sizeof (struct node));

  if (new_node == NULL)
    {
      printf ("Memory allocation failed\n");
    }

  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;

  return new_node;

}

struct node *
insert_node (struct node *root, int data)
{
  if (root == NULL)
    {
      return create_node (data);
    }

  if (root->data < data)
    root->left = insert_node (root->left, data);
  else
    root->right = insert_node (root->right, data);


  return root;

}

void
inorder_traversal (struct node *root)
{
  if (root != NULL)
    {
      inorder_traversal (root->left);
      printf ("%d ", root->data);
      inorder_traversal (root->right);
    }
}

int
main ()
{
  struct node *root = NULL;

  root = insert_node (root, 30);
  root = insert_node (root, 10);
  root = insert_node (root, 50);
  root = insert_node (root, 40);
  inorder_traversal (root);


}
