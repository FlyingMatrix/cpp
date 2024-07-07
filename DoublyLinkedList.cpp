// C++ Program to implement insert, delete, and print operation in doubly linked list
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList
{
    private:
        Node* head;

    public:
        DoublyLinkedList() {} // Constructor

        void insertAtStart(int data)
        {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->prev = NULL;
            newNode->next = head;

            if (head != NULL)
            {
                head->prev = newNode;
            }
            head = newNode;
        }

        void deleteNode(int data)
        {
            Node* temp = head;
            while (temp != NULL && temp->data != data)
                temp = temp->next;

            if (temp == NULL)
                return;

            if (temp->prev != NULL)
            {
                temp->prev->next = temp->next;
            }
            else // temp = head
                head = temp->next;

            if (temp->next != NULL)
            {
                temp->next->prev = temp->prev;
            }

            delete temp;
        }

        void printList()
        {
            Node* temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main()
{
    DoublyLinkedList dll;

    dll.insertAtStart(1);
    dll.insertAtStart(2);
    dll.insertAtStart(3);
    dll.insertAtStart(4);
    dll.insertAtStart(5);

    std::cout << "Original Doubly Linked List: ";
    dll.printList();

    dll.deleteNode(2);

    std::cout << "Doubly Linked List after deletion: ";
    dll.printList();

    return 0;
}
