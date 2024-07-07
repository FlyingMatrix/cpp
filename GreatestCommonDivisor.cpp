// C++ program to find GCD of two numbers
#include <iostream>
using namespace std;

int gcd(int a, int b)
{		
	int result = 0;
	result = min(a, b);

	while (result > 0)
	{
		if (a % result == 0 && b % result == 0)
		{
			return result;
			break;
		}
		else
		{
			result--;
		}
	}
}

int main()
{
	int a = 0;
	int b = 0;
	int result = 0;
	
	while (true)
	{
		cout << "Please input two numbers: " << endl;
		cin >> a >> b;
		result = gcd(a, b);
		cout << "The result of the Greatest Common Divisor is: " << result << endl;
	}
	
	return 0;
}