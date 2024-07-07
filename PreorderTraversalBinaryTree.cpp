// C++ program for preorder traversal - node, left, right
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
    temp->left = temp->right = NULL;
    return temp;
}

void PreorderTraversal(Node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    PreorderTraversal(node->left);
    PreorderTraversal(node->right);
}

int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Preorder traversal of binary tree is \n";
    PreorderTraversal(root);
    
    return 0;
}

