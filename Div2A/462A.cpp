#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n,  b, i, j, c = 0;
	cin >> n;
	char a[n][n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i - 1 >= 0 && a[i - 1][j] == 'o')
				c++;
			if (j - 1 >= 0 && a[i][j - 1] == 'o')
				c++;
			if (i + 1 <= n - 1 && a[i + 1][j] == 'o')
				c++;
			if (j + 1 <= n - 1 && a[i][j + 1] == 'o')
				c++;
			if (c % 2 != 0)
			{
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;
	return 0;
}