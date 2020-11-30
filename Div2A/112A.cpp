#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	string a, b;
	cin >> a >> b;
	int i, f = 0;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	for (i = 0; i < a.size(); i++)
	{
		if (a[i] < b[i])
		{
			f = -1;
			break;
		}
		if (a[i] > b[i])
		{
			f = 1;
			break;
		}

	}
	cout << f << endl;
	return 0;
}