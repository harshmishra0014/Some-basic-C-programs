#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* create()
{
	int x;
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data (-1 for no node)\n");
	scanf("%d",&x);
	if(x==-1)
	return 0;
	newnode->data=x;
	printf("Enter left child of %d\n",x);
	newnode->left=create();
	printf("Enter right child of %d\n",x);
	newnode->right=create();
	return newnode;
}
void inorder(struct node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
void preorder(struct node *root)
{
	if(root==NULL)
	return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
void main()
{
	struct node *root;
	root=0;
	root=create();
	printf("Inorder Traversal \n");
	inorder(root);
	printf("\nPreorder Traversal \n");
	preorder(root);
	printf("\nPostorder Traversal \n");
	postorder(root);
}
