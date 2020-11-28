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
	int a[n], b[n + 1], i = 0;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n; i++)
	{
		b[a[i]] = i + 1;
	}
	for (i = 1; i <= n; i++)
	{
		cout << b[i] << " ";
	}
	return 0;

}