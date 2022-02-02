#include <iostream>
using namespace std;


int main()
{
	
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}

	int num = 1, max = arr[0];

	for (int i = 1 ; i< 9 ; i ++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			num = i+1;
		}
	}

	cout << arr[num-1] << "\n" << num;
	
}