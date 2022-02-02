#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	int C, N;
	double count;
	double average;

	cin >> C;
	

	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < C; i++)
	{
		int score[1000] = {};
		count = 0, average = 0;

		cin >> N;
		for (int j = 0; j < N; j++)
		{
			cin >> score[j];
			average += score[j];
		}
		average = average/N;

		for (int j = 0; j < N; j++)
		{
			if (average < score[j])
				count++;
		}

		cout << (count / N) * 100<<"%\n";

	}
}