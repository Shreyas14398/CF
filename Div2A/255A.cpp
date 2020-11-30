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

	int n, a = 0, b = 0, c = 0, i, j = 1;
	cin >> n;
	while (n--)
	{
		cin >> i;
		if (j == 1)
		{
			a += i;
			j = 2;
		}
		else if (j == 2)
		{
			b += i;
			j = 3;
		}
		else
		{
			c += i;
			j = 1;
		}
	}
	//cout << a << " " << b << " " << c;
	if (a > b && a > c)
		cout << "chest" << endl;
	else if (b > a && b > c)
		cout << "biceps" << endl;
	else
		cout << "back" << endl;
	return 0;
}