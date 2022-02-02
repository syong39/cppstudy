#include <iostream>
#include <string>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	string word;
	int alphabet[26] = {0};
	
	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		word[i] = toupper(word[i]);
		alphabet[word[i] - 'A']++;
	}

	int max = 0, temp, cnt = 0;

	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
		{
			max = alphabet[i];
			cnt = 0;
			temp = i;
			
		}
		if (max == alphabet[i])
			cnt++;
	}
	if (cnt > 1)
		cout << "?";
	else
		cout << (char)(temp + 'A');
}