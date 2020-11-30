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
	if (n >= 0)
		cout << n << endl;
	else
	{
		if (n >= 100 || n <= -100)
			cout << max((n / 10), (n / 10) - ((n / 10) % 10) + (n % 10)) << endl;
		else
			cout << max((n / 10), (n % 10));
	}
	//cout <<  (n / 10) + (n % 10);
	return 0;
}