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

	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if (a == x)
	{
		cout << a + y - b << " " << b << " " << a + y - b << " " << y;
	}
	else if (b == y)
	{
		cout << a << " " << b + x - a << " " << x << " " << b + x - a;
	}
	else
	{
		if (abs(y - b) == abs(x - a))
			cout << a << " " << y << " " << x << " " << b;
		else
			cout << -1 << endl;
	}
	return 0;
}