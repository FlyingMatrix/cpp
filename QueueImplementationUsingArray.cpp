// C++ Program to implement queue using array
#include<iostream>
using namespace std;

#define MAX 100

class Queue
{
	private:
		int front;
		int rear;
		int array[MAX];

	public:
		Queue() // Constructor
		{
			front = rear = -1;
		}

		void enqueue(int x)
		{
			if (rear == MAX - 1)
			{
				cout << "Queue overflow." << endl;
				return;
			}
			else
			{
				array[++rear] = x;
				if (front == -1) // empty queue
					front = 0;
			}
		}

		int dequeue()
		{
			if (front == -1)
			{
				cout << "Queue underflow." << endl;
				return -1;			
			}
			else
			{
				int temp = array[front];
				if (front == rear) // there is only one element in the queue
				{
					front = rear = -1;
				}
				else
					front++;
				return temp;
			}
		}

		bool isEmpty() { return (front == -1); }

		int peek() // Function to return the front element of the queue
		{
			if (front == -1)
			{
				cout << "The queue is empty!" << endl;
				return -1;
			}
			else
			{
				return array[front];
			}
		}
};

int main()
{
	Queue q;
	q.enqueue(0);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);

	cout << "Dequeued element: " << q.dequeue() << endl;
	cout << "Front element: " << q.peek() << endl;
	
	return 0;
}