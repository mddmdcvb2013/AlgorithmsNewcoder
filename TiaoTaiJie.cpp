#include <iostream>
using namespace std;

class Solution {
public:
	int jumpFloor(int number) {
		if (number == 1)
		{
			return 1;
		}
		if (number == 2)
		{
			return 2;
		}
		long long int Floorone = 1;
		long long int Floortwo = 2;
		long long int FloorN = 0;
		for (int i = 3; i <= number;i++)
		{
			FloorN = Floorone + Floortwo;
			Floorone = Floortwo;
			Floortwo = FloorN;
		}
		return FloorN;
	}
};

int main()
{
	Solution A;
	int input;
	cin >> input;
	long long int output = A.jumpFloor(input);
	cout << output;
	return 0;
}