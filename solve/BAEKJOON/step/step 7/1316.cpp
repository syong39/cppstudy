#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);

	int num,j,cnt=0;
	int alphabet[26];
	string word;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> word;
		fill_n(alphabet, 26, 0); // 0으로 초기화
		alphabet[word[0] - 97]=1; // word의 첫 엘리먼트에 해당하는 인덱스를 (미리)더해줌

		for (j = 1; j<word.length(); j++)
		{
			if (word[j - 1] != word[j])
			{
				int idx = word[j] - 97;
				if (alphabet[idx] == 0)
					alphabet[idx]++;
				else
					break;
			}

		} // 알파뱃이 변했을 때, 그리고 해당 인덱스가 더해져있다면 break
		if (j == word.length())
			cnt++;
	}
	cout<<cnt;

}