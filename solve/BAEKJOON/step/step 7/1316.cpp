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
		fill_n(alphabet, 26, 0); // 0���� �ʱ�ȭ
		alphabet[word[0] - 97]=1; // word�� ù ������Ʈ�� �ش��ϴ� �ε����� (�̸�)������

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

		} // ���Ĺ��� ������ ��, �׸��� �ش� �ε����� �������ִٸ� break
		if (j == word.length())
			cnt++;
	}
	cout<<cnt;

}