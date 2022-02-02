#include <iostream>

using namespace std;

int main() {

	int num;
	int a = 0, b = 0;
	cin >> num;

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	for (int i = 1; i<=num; i++)
	{
		cin >> a>>b;
		cout << "Case #" << i << ": " << a + b << "\n";
	}
}