#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	
	int N;
	cin >> N;

	int i = 1;

	while (N > 1)
	{
		N -= i;
		i++;
	}

	if (i % 2 == 1)
		cout << i + 1 - N << '/' << N;
	else
		cout << N << '/' << i + 1 - N;
}