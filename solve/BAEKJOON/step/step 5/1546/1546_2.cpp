#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);


	int num = 0;
	double total = 0;
	double arr[1001];
	
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr, arr + num);

	for (int i = 0; i < num; i++)
	{
		total = total + (arr[i] / arr[num - 1]) * 100;
	}

	cout << total / num;
	


}