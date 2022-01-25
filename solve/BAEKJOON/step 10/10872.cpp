#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	int num, result = 1;
	cin >> num;

	if (num != 0)
		result = factorial(num);
	cout << result;
	

	
}