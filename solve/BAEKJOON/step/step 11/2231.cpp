#include <iostream>
using namespace std;

int solution(int n)
{
	int sum = n;
	while (n)
	{
		sum = sum + n % 10;

		n /= 10;

	}
	return sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	int num;
	cin >> num;

	for (int i = 1; i < num; i++)
	{
		int sum = solution(i);
		if (sum == num)
		{
			cout << i << "\n";
			return 0;
		}
	}

	cout << 0 << "\n";

}