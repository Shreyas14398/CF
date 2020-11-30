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

	int a, n, m;
	cin >> n >> m;
	if (m > n)
	{
		cout << "-1" << endl;
		return 0;
	}
	else
	{
		if (n % 2 == 0)
			a = n / 2;
		else
			a = (n + 1) / 2;
		//cout << a << endl;
		while (a % m != 0)
			a++;
	}
	cout << a << endl;
	return 0;
}