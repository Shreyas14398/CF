#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int n, i = 0, c = 0, j = 0;
	cin >> n;
	int a[n], b[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i] == b[j])
				c++;
		}
	}
	cout << c << endl;
	return 0;
}