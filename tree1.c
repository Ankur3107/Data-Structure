#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *left;
	struct node *right;
};


struct node* NewNode(int data)
{
	struct node *newNode = (struct node*) malloc(sizeof(struct node));
	
	newNode->data = data;
	newNode->left=NULL;
	newNode->right=NULL;

	return newNode;
}

void printPostorder(struct node *node)
{
	if (node == NULL)
        return;

     // first recur on left subtree
     	printPostorder(node->left);

     // then recur on right subtree
     	printPostorder(node->right);

     // now deal with the node
     	printf("%d ", node->data);

}

void printInorder(struct node *node)
{
	if (node == NULL)
        return;

     // first recur on left subtree
     	printInorder(node->left);

	// now deal with the node
     	printf("%d ", node->data);

     // then recur on right subtree
     	printInorder(node->right);

     

}

void printPreorder(struct node *node)
{
	if (node == NULL)
        return;

	// now deal with the node
     	printf("%d ", node->data);

     // first recur on left subtree
     	printPreorder(node->left);

     // then recur on right subtree
     	printPreorder(node->right);

     

}

int sizeOfTree(struct node *root)
{
	if(root==NULL)
	return 0;
	
	else
	return (sizeOfTree(root->left) + 1 + sizeOfTree(root->right));
	
}

int main()
{

	struct node *root = NewNode(1);
	root->left             = NewNode(2);
     	root->right           = NewNode(3);
     	root->left->left     = NewNode(4);
     	root->left->right   = NewNode(5); 

	printf("\n Preorder traversal of binary tree is \n");
     	printPreorder(root);

     	printf("\n Inorder traversal of binary tree is \n");
     	printInorder(root);  

     	printf("\n Postorder traversal of binary tree is \n");
     	printPostorder(root);
	
	printf("\n Size of tree: \n");
     	int size = sizeOfTree(root);
	printf("%d",size);


     
     return 0;
}

