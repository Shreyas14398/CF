#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int n;
	cin >> n;
	int a[n], x = INT_MAX, y = INT_MIN, p = -1, q = -1, i;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		if (y < a[i])
		{
			y = a[i];
			p = i;
		}
		if (x >= a[i])
		{
			x = a[i];
			q = i;
		}
	}
	//cout << p << q << endl;
	if (p > q)
		cout << p + n - 2 - q;
	else
		cout << p + n - 1 - q;
	return 0;

}