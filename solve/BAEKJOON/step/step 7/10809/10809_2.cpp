#include <iostream>
#include <string>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	string s;
	cin >> s;

	for (int i = 0; i < 26; i++)
	{
		cout << (int)s.find('a' + i) << " ";
	}

}