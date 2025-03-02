#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left, *right;
};

struct node* insert(struct node *root, int value)
{
	if (root == NULL)
	{
		struct node *newnode = (struct node *) malloc(sizeof(struct node));
		newnode->data = value;
		newnode->left = newnode->right = NULL;
		return newnode;
	}
	else if (value < root->data)
		root->left = insert(root->left, value);
	else
		root->right = insert(root->right, value);

	return root;
}

void print_preorder(struct node *root)
{
	if (root != NULL)
	{
		printf("%c ", root->data);
		print_preorder(root->left);
		print_preorder(root->right);
	}
}

void print_inorder(struct node *root)
{
	if (root != NULL)
	{
		print_inorder(root->left);
		printf("%c ", root->data);
		print_inorder(root->right);
	}
}

void print_postorder(struct node *root)
{
	if (root != NULL)
	{
		print_postorder(root->left);
		print_postorder(root->right);
		printf("%c ", root->data);
	}
}

int main()
{
	struct node *root = NULL;

	root = insert(root, 'C');
	root = insert(root, 'A');
	root = insert(root, 'B');
	root = insert(root, 'E');
	root = insert(root, 'D');

	printf("Preorder =>  ");
	print_preorder(root);
	printf("\n");
	printf("Inorder =>   ");
	print_inorder(root);
	printf("\n");
	printf("Postorder => ");
	print_postorder(root);
	printf("\n");

	return 0;
}
