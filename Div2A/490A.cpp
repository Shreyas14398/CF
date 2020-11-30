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

	int n;
	cin >> n;
	int a[n];
	std::vector<int> v1, v2, v3;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
			v1.pb(i + 1);
		if (a[i] == 2)
			v2.pb(i + 1);
		if (a[i] == 3)
			v3.pb(i + 1);
	}
	//cout << v1.size() << v2.size() << v2.size() << endl;
	if (v1.size() == 0 || v2.size() == 0 || v3.size() == 0)
		cout << "0" << endl;
	else
	{
		int m = min(v1.size(), min(v2.size(), v3.size()));
		cout << m << endl;
		for (int j = 0; j < m; j++)
			cout << v1[j] << " " << v2[j] << " " << v3[j] << endl;
	}

	return 0;
}