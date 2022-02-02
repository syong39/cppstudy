#include <iostream>
using namespace std;

int main() {

	int num;
	cin >> num;
	int total = 0;

	for (int i = 0; i<=num; i++)
	{
		total += i;
	}
	cout << total;
}