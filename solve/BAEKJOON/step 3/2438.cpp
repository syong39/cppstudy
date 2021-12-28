#include <iostream>

using namespace std;

int main() {

	int num;
	cin >> num;

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	for (int i = 0; i<num; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout<< "\n";
	}
}