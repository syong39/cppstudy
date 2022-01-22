#include <iostream>
#include <string>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	string world;
	int alphabet[26] = {};
	cin >> world;
	fill_n(alphabet, 26, -1);

	for (int i = 0; i < 26; i++)
	{

		for (int j = 0; j < world.length(); j++)
		{

			if (world[j] == 'a' + i)
			{
				alphabet[i] = j;
				break;
			}
		}
		cout << alphabet[i] << " ";

	}



}