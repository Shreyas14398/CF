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
	int a = 0, b = 0, c = 0, i;
	while (n--)
	{
		cin >> i;
		a += i;
		cin >> i;
		b += i;
		cin >> i;
		c += i;
	}
	if (a == 0 && b == 0 & c == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}