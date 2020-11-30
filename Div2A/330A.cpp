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

	int n, m , b;
	set<int> s1, s2;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			char tmp;
			cin >> tmp;
			if (tmp == 'S')
			{
				s1.insert(i);
				s2.insert(j);
			}
		}
	}
	cout << n*m - (s1.size()*s2.size());
	return 0;
}