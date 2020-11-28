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

	int n, m, i, t, mi = INT_MAX;
	cin >> m >> n;
	std::vector<int> v;
	for (i = 0; i < n; i++ )
	{
		cin >> t;
		v.pb(t);
	}
	// for (i = 0; i < n; i++)
	// 	cout << v[i] << " ";
	//cout << endl;
	sort(v.begin(), v.end(), greater<int>());
	// for (i = 0; i < n; i++)
	// 	cout << v[i] << " ";
	for (i = 0; i <= n - m; i++)
		mi = min((v[i] - v[i + m - 1]), mi);
	cout << mi;
	return 0;
}