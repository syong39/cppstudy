#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	
	int num,result=0,total =1;
	int i;
	cin >> num;

	for (i = 0; num>result; i++)
	{
		result = 6 * i + total;
		total = result;
	}
	cout << i ;


}