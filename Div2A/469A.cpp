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

	int n, p, q, i, j;
	cin >> n;
	cin >> p;
	int c[n + 1];
	for (i = 1; i < n + 1; i++)
		c[i] = 0;
	int a[p];
	for (i = 0; i < p; i++)
	{
		cin >> a[i];
		c[a[i]]++;
	}
	cin >> q;
	int b[q];
	for (i = 0; i < q; i++)
	{
		cin >> b[i];
		c[b[i]]++;
	}
	for (i = 1; i <= n; i++)
	{
		if (!c[i])
		{
			cout << "Oh, my keyboard!" << endl;
			return 0;
		}
	}
	cout << "I become the guy." << endl;
	return 0;
}