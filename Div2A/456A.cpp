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

	int n, a, b, i, c = 0;
	cin >> n;
	std::vector<pair<int, int> > v;
	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.pb(mp(a, b));
	}
	sort(v.begin(), v.end());
	for (i = 0; i < n - 1; i++)
	{
		if ((v[i].fs < v[i + 1].fs) && (v[i].sc > v[i + 1].sc))
			c++;
	}
	if (c)
		cout << "Happy Alex" << endl;
	else
		cout << "Poor Alex" << endl;
	return 0;
}