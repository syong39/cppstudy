#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	int A, B, C;
	int point = 0; //break_even_point
	cin >> A >> B >> C;


	if (B >= C)
		cout << -1;
	else
	{
		point = A / (C - B) + 1;
		cout << point;
	}
}