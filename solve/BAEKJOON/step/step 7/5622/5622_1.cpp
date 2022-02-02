#include <iostream>
#include <string>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	
	string word;
	cin >>word;

	int total = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == 'A' || word[i] == 'B' || word[i] == 'C')
			total += 3;
		else if (word[i] == 'D' || word[i] == 'E' || word[i] == 'F')
			total += 4;
		else if (word[i] == 'G' || word[i] == 'H' || word[i] == 'I')
			total += 5;
		else if (word[i] == 'J' || word[i] == 'K' || word[i] == 'L')
			total += 6;
		else if (word[i] == 'M' || word[i] == 'N' || word[i] == 'O')
			total += 7;
		else if (word[i] == 'P' || word[i] == 'Q' || word[i] == 'R'||word[i]=='S')
			total += 8;
		else if (word[i] == 'T' || word[i] == 'U' || word[i] == 'V')
			total += 9;
		else if (word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z')
			total += 10;
	}
	cout << total;
}