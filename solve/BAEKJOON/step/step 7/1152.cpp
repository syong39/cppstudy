#include <iostream>
#include <string>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	string word;
	getline(cin, word);
	int cnt = 1;

	for (int i = 0; i < word.length(); i++)
	{
		
		if (word[i] == ' ')
		{
			cnt++;
		}

	}
	if (word[0] == ' ')
		cnt--;
	if (word[word.length()-1] == ' ')
		cnt--;

	cout << cnt;
}