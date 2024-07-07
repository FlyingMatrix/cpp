// C++ Program to Find the N-th Term of the Fibonacci Series
#include <iostream>
using namespace std;

int fibonacci(int n)
{
	int first = 1;
	int second = 1;
	int result = 0;
	
	if (n == 1)
	{
		result = first;
	}
	else if (n == 2)
	{
		result = second;
	}
	else
	{
		result = fibonacci(n - 1) + fibonacci(n - 2);
	}

	return result;
}

int main()
{
	int n = 0;

	while (true)
	{
		cout << "Please input a number n: " << endl;
		cin >> n;
		if (n < 1)
		{
			cout << "Error - n can't be smaller than 1." << endl;
			continue;
		}
		else
		{
			cout << "The result of the N-th Term of the Fibonacci Series is: " << fibonacci(n) << endl;
		}	
	}

	return 0;
}