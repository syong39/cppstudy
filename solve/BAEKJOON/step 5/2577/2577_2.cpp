#include <iostream>
#include <string>
using namespace std;


int main()
{
	
	int a, b, c;
	int count[10] = {};

	cin >> a >> b >> c;
	
	int total = a * b * c;
	string s = to_string(a * b * c);

	while (total != 0)
	{
		count[total % 10]++;
		total /= 10;
	}

	for (int num : count)
	{
		cout << num << "\n";
	}

}