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

	int n, k, i, x, y, m = INT_MIN;
	cin >> n >> k;
	std::vector<pair<int, int> > v;
	for (i = 0; i < n; i++)
	{
		cin >> x >> y;
		//cout << m << endl;
		if (y > k)
			m = max(m, x - y + k);
		else
			m = max(m, x);
		//v.pb(mp(x, y));
	}
	//sort(v.begin(), v.end());
	// for (i = 0; i < n; i++)
	// {
	// 	cout << v[i].fs << v[i].sc << endl;
	// }
	// for (i = 0; i < n; i++)
	// {
	// 	if (k)
	// 	}
	cout << m << endl;
	return 0;
}