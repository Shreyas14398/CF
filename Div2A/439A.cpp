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

	int n, i, d, c = 0, s = 0;
	cin >> n >> d;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		s += a[i];
	}
	if (s + ((n - 1) * 10) > d)
		cout << "-1" << endl;
	else
	{
		c = n - 1;
		cout << 2 * c + (d - (s + ((n - 1) * 10))) / 5;
	}
	//cout << c << endl;
	return 0;
}