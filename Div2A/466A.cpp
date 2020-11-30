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

	int n, m, a, b, x = INT_MAX;
	cin >> n >> m >> a >> b;
	cin >> n >> m >> a >> b;
	if (m * a <= b)
		cout << n * a << endl;
	else
		cout << (n / m) * b + min((n % m) * a, b) << endl;
	return 0;
}