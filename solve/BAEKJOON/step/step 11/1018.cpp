#include <iostream>
using namespace std;

string wb[8] = { "WBWBWBWB",
					 "BWBWBWBW",
					 "WBWBWBWB",
					 "BWBWBWBW",
					 "WBWBWBWB",
					 "BWBWBWBW",
					 "WBWBWBWB",
					 "BWBWBWBW" };
string bw[8] = { "BWBWBWBW",
				 "WBWBWBWB",
				 "BWBWBWBW",
				 "WBWBWBWB",
				 "BWBWBWBW",
				 "WBWBWBWB",
				 "BWBWBWBW",
				 "WBWBWBWB", };
string board[50]; // == char board[50][50];
int result = 64;

void wbcpr(int x, int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (wb[i][j] != board[y + i][x + j])
			{
				cnt++;
			}
		}
	}
	if (cnt < result) result = cnt;
	
}
void bwcpr(int x, int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (bw[i][j] != board[y + i][x + j])
			{
				cnt++;
			}
		}
	}
	if (cnt < result) result = cnt;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int m, n, cnt = 0;
	cin >> m >> n;

	for (int i = 0; i < m; i++)
	{
		cin >> board[i];
	}

	for (int y = 0; y < m-7; y++)
	{
		for (int x = 0; x < n-7; x++)
		{
			wbcpr(x, y);
			bwcpr(x, y);
		}
	}

	cout<<result;


}