#include <iostream>
using namespace std;

class Solution {
public:
	int Fibonacci(int n) {
		if (n <= 1)
		{
			return n;
		}
		int first = 0, second = 1, third = 0;
		for (int i = 2;i <= n;i++)
		{
			third = first + second;
			first = second;
			second = third;
		}
		return third;
	}
};

int main()
{
	Solution A;
	int input;
	cin >> input;
	int output = A.Fibonacci(input);
	cout << output;
	return 0;
}