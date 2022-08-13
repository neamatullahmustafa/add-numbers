#include <iostream>
using namespace std;
int main()
{
	int num = 1, sum = 0;
	cout << "please inter number\n";
	while (num != 0)
	{
		cin >> num;
		sum = sum + num;
	} cout << " sum =" << (sum) << "\n";
	return 0;
}