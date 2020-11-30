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

	int n, k, i, j, c, m;
	cin >> n >> k;
	int a[n];
	for (i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	i = 0;
	while (a[i] + k <= 5)
		i++;
	//cout << i << endl;
	cout << (i) / 3 << endl;
	return 0;
}