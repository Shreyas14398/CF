#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		if (s.size() <= 10)
			cout << s << endl;
		else
			cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
	}
	return 0;
}