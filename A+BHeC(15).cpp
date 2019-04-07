#include <iostream>
using namespace std;

int main()
{
	int T, i;
	cin >> T;
	int s[11];
	for (i = 1;i <= T;i++)
	{
		long long x, y, z;
		cin >> x >> y >> z;
		if ((x + y)>z)s[i - 1] = 1;
		else s[i - 1] = 2;
	}
	for (int j = 0;j<T;j++)
	{
		if (s[j] == 1)
		{
			cout << "Case #" << j + 1 << ": true" << endl;
		}
		else
		{
			cout << "Case #" << j + 1 << ": false" << endl;
		}
	}
	return 0;
}