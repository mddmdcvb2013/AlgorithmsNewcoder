#include <iostream>
using namespace std;

class Solution {
public:
	int jumpFloorII(int number) {
		long long int sum = 1;
		for (int i = 1;i < number;i++)
		{
			sum *= 2;
		}
		return sum;
	}
};

int main()
{
	Solution A;
	int input;
	cin >> input;
	long long int output = A.jumpFloorII(input);
	cout << output;
	return 0;
}