#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i];
	}
	cout << "??!";
}