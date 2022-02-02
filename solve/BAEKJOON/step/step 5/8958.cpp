#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	int num;
	cin >> num;

	string s;

	for (int i = 0; i < num; i++)
	{
		cin >> s;
		int total = 0, count = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'O')
				count++;
			else
				count = 0;

			total += count;
		}
		cout << total << "\n";
	}


}