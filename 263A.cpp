#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int t, i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cin >> t;
			if (t == 1)
			{
				cout << abs(i - 2) + abs(j - 2) << endl;
				return 0;
			}
		}
	}
	cout << "-1" << endl;
	return 0;

}