#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	int num;
	int arr[51][2] = {};
	int result[51];
	fill_n(result,51,1);
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
				result[i]++;
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << result[i] << " ";
	}
}