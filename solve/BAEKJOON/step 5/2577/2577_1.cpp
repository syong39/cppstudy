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
		count[ch - 48]++; //48이라는 아스키코드가 기억이 안 난다면 문자'0'을 뺴줘도 된다.
	}

	for (int num : count) {
		cout << num <<"\n";
	}

}