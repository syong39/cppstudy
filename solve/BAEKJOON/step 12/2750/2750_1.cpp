#include <iostream>
using namespace std;

int arr[1000] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}


	int temp = 0;

	for (int i = 0; i < num; i++)
	{
		for (int j = i+1; j < num; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}
}