// C++ program for post order traversal - left, right, node
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

void PostorderTraversal(Node* node)
{
    if (node == NULL)
        return;

    PostorderTraversal(node->left);
    PostorderTraversal(node->right);
    cout << node->data << " ";
}

int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Function call
    cout << "Postorder traversal of binary tree is \n";
    PostorderTraversal(root);

    return 0;
}


