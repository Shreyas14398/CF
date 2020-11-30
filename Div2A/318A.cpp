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

	long long int n, k;
	cin >> n >> k;
	if (n % 2 == 0)
	{
		if (k > n / 2)
		{
			cout << 2 * (k - (n / 2));
		}
		else
		{
			cout << (2 * (k - 1)) + 1;
		}
	}
	else
	{
		if (k > (n / 2) + 1)
		{
			cout << 2 * (k - ((n / 2) + 1));
		}
		else
		{
			cout << (2 * (k - 1)) + 1;
		}
	}
	return 0;
}