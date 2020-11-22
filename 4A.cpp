#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	int i, f = 0, w;
	cin >> w;
	for (i = 2; i < w; i++)
	{
		if (i % 2 == 0 && (w - i) % 2 == 0)
		{
			f = 1;
		}
	}
	if (f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}