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

	int n, k;
	std::vector<int> v;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int y, j, s;
		bool f = false;
		cin >> y;
		for (j = 0; j < y; j++)
		{
			cin >> s;
			if (!f && k > s)
			{
				v.pb(i);
				f = true;
			}
		}
	}
	cout << v.size() << endl;
	for (int x = 0; x < v.size(); x++)
		cout << v[x] + 1 << " ";
	cout << endl;
	return 0;
}