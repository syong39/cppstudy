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

	for (char ch : s) {
		count[ch - 48]++; //48�̶�� �ƽ�Ű�ڵ尡 ����� �� ���ٸ� ����'0'�� ���൵ �ȴ�.
	}

	for (int num : count) {
		cout << num <<"\n";
	}

}