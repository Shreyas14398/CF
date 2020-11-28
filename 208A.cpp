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

	string s;
	cin >> s;
	int n = s.size();
	const string t = "WUB";
	string res = "";
	for (int i = 0; i < n;) {
		if (i + 3 <= n && s.substr(i, 3) == t)
		{
			i += 3;
			if (!res.empty() && res.back() != ' ')
				res += ' ';
		}
		else {
			res += s[i];
			i++;
		}
	}
	while (!res.empty() && res.back() == ' ')
		res.pop_back();
	cout << res << '\n';
	return 0;
}