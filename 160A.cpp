#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	int n, i, s = 0, c = 0, s1 = 0, j;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		s += a[i];
	}
	sort(a, a + n, greater<int>());
	for (i = 0; i < n; i++)
	{
		c++;
		s1 += a[i];
		if (s1 > s - s1)
		{
			cout << c;
			break;
		}
	}
	// for (i = 0; i < n; i++)
	// {
	// 	cout << a[i];
	// }
	return 0;
}