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

	int a, b, c, m = INT_MIN;
	cin >> a >> b >> c;
	m = max((a + b + c), a + (b * c));
	m = max(m, (a * b) + c);
	m = max(m, a * b * c);
	m = max(m, a * (b + c));
	m = max(m, (a + b) * c);
	cout << m << endl;
	return 0;
}