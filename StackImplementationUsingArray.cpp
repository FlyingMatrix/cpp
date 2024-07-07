// C++ Program to implement stacks using array
#include<iostream>
using namespace std;

#define MAX 100

class Stack
{
	private:
		int top;
		int array[MAX];

	public:
		Stack() // Constructor
		{
			top = -1;
		}

		void push(int x)
		{
			if (top == MAX - 1)
			{
				cout << "Stack overflow" << endl;
				return;
			}
			else
				array[++top] = x;
		}

		int pop()
		{
			if (top == -1)
			{
				cout << "Stack underflow" << endl;
				return -1;
			}
			else
				return array[top--];
		}

		bool isEmpty() { return (top == -1); }

		int peek() // Function to return the top element of the stack
		{
			if (top == -1)
			{
				cout << "Stack is empty" << endl;
				return -1;
			}
			else
				return array[top];
		}
};

int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	cout << "Popped element: " << s.pop() << endl;
	cout << "Top element: " << s.peek() << endl;
	
	return 0;
}