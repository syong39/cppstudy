#include <iostream>
#include <string>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	string num1, num2;
	cin >> num1 >> num2;
	string num;
	for (int i = 2; i >= 0; i--)
	{
		if (num1[i] > num2[i]){
			num = num1; break;
		}

		else if (num2[i] > num1[i]) {
			num = num2; break;
		}
	}
	cout << num[2] << num[1] << num[0];

}