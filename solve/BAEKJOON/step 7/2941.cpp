#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cin >> word;

	string arr[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int idx, cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			idx = word.find(arr[i]);
			if (idx == string::npos)
				break;
			word.replace(idx, arr[i].length(), "#");
		}
	}
	cout << word.length();
}