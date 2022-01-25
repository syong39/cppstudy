#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	int A, B, V;
	cin >> A >> B >> V;

	int day = 1;
	day += (V - A) / (A - B);

	if ((V - A) % (A - B) != 0)
		day++;
	if (V <= A)
		cout << 1;
	else
		cout << day;
}