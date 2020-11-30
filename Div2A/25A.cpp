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

	int n, c = 0, i;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 0)
			c++;
	}
	if (c == 1)
	{
		for (i = 0; i < n; i++)
			if (a[i] % 2 == 0)
				cout << i + 1 << endl;
	}
	else
	{
		for (i = 0; i < n; i++)
			if (a[i] % 2 != 0)
				cout << i + 1 << endl;
	}
	return 0;
}
