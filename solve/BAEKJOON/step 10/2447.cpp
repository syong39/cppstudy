#include <iostream>
using namespace std;

void rec(int i, int j, int n)
{
	if (i / n % 3 == 1 && j / n % 3 == 1)
	{
		cout << ' ';
	}else if (n / 3 == 0){
		cout << '*';
	}else {
		rec(i,j,n/3);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			rec(i, j, num);
		cout << '\n';
	}


}