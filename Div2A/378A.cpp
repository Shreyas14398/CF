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

	int a, b, f = 0, s = 0, d = 0;
	cin >> a >> b;
	for (int i = 1; i <= 6; i++)
	{
		if (abs(i - a) == abs(i - b))
			d++;
		else if (abs(i - a) < abs(i - b))
			f++;
		else
			s++;
	}
	cout << f << " " << d << " " << s << endl;
	return 0;
}