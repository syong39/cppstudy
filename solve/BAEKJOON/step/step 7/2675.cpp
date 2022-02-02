#include <iostream>
#include <string>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	int n;
	cin >> n;

	string s;

	for (int i = 0; i < n; i++)
	{
		int R;
		cin >> R >> s;

		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < R; k++)
			{
				cout << s[j];
			}
		}
		cout << "\n";
	}
}