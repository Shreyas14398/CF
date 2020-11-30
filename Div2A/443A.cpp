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
	getline(cin, s);
	int c = 0;
	//cout << s.length();
	//cout << s[0] << s[1] << s[2];
	std::map<char, int> m;
	for (char ch = 'a'; ch <= 'z'; ch++)
		m[ch] = 0;
	for (int i = 1; i < s.length() - 1; i++)
	{
		//cout << i << endl;
		if (s[i] != ' ' && s[i] != ',')
		{
			//cout << s[i];
			m[s[i]] = 1;
		}
	}
	for (char ch = 'a'; ch <= 'z'; ch++)
		c += m[ch];
	cout << c << endl;
	return 0;
}