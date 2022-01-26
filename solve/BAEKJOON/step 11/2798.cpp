#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	

	int n, m;
	int total=0;
	cin >> n >> m;

	int arr[100] = {};

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	int result = 0;
	int sum = 0;

	for (int i = 0; i < n - 1; i++)	{
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (sum > result && sum <= m) result = sum;
			
			}
		}
	}
	
	cout << result;
}