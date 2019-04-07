#include <iostream>
using namespace std;

class Solution {
public:
	int NumberOf1(int n) {
		int sum = 0;
		int index = 1;
		while (index != 0)
		{
			if ((n&index) != 0)
			{
				sum++;
			}
			index = index << 1;
		}
		return sum;
	}
};

int main()
{
	Solution A;
	int input;
	cin >> input;
	long long int output = A.NumberOf1(input);
	cout << output;
	return 0;
}