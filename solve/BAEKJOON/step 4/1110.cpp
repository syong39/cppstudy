#include <iostream>

using namespace std;

int main() {

	int num,num2;
	cin >> num;
	num2 = num;
	int a, b;
	int n = num;

	if (num < 10)
		num *= 10;

	int count = 0;
	while (1){
	
		a = n / 10;
		b = n % 10;
		n = b*10+((a+b)%10);
		count++;

		if (n == num2)
			break;
		
	}

	cout << count;
	
}