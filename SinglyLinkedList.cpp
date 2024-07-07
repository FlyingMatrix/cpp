// C++ Program to perform insertion, deletion, and print operations in LL
#include<iostream>
using namespace std;

struct Node 
{
	int data;
	Node* next;
};

Node* head = nullptr;

void insert(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}

void deleteNode(int data)
{
	Node* temp = head;
	Node* prev = nullptr;
	if (temp != nullptr && temp->data == data)
	{
		head = temp->next;
		delete temp;
		return;
	}
	while (temp != nullptr && temp->data != data)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == nullptr) return;
	else
	{
		prev->next = temp->next;
		delete temp;
	}
}

void printList()
{
	Node* temp = head;
	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	cout << "Linked List is \n";
	printList();

	deleteNode(3);
	cout << "Linked List after deletion of 3: ";
	printList();

	return 0;
}