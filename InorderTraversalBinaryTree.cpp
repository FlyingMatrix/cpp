// C++ program Inorder Traversal - left, node, right
/* A binary tree node has data, pointer to left child and a pointer to right child */
#include <iostream>
using namespace std;

struct Node 
{
	int data;
	Node* left;
	Node* right;
};

Node* newNode(int data)
{
	Node* temp = new Node();
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void InorderTraversal(Node* node)
{
	if (node == NULL)
		return;

	InorderTraversal(node->left);
	cout << node->data << " ";
	InorderTraversal(node->right);
}

int main()
{
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Inorder traversal of binary tree is \n";
	InorderTraversal(root);

	return 0;
}