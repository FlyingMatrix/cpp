// C++ program for level order traversal - traversal by layers
#include <iostream>
#include <queue>
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

void LevelOrderTraversal(Node* node)
{
    if (node == NULL)
        return;

    queue<Node*> q;
    while (node)
    {
        if (node->left)
        {
            q.push(node->left);
        }
        if (node->right)
        {
            q.push(node->right);
        }
        cout << node->data << " ";

        node = q.front();
        q.pop();

        if (q.empty())
        {
            cout << node->data << " "; // when q is empty, print the last node->data and return
            return;
        }
    }
}

int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Function call
    cout << "Level-order traversal of binary tree is \n";
    LevelOrderTraversal(root);

    return 0;
}


