#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	string s;
	cin >> s;
	int a[4] = {0}, i, c, j;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i] != '+')
		{
			char x = s[i];
			a[x - 48]++;
		}
	}
	c = a[1];
	if (a[2] == 0 && a[3] == 0)
	{
		for (j = 0; j < c - 1; j++)
			cout << "1+";
		if (c > 0)
			cout << "1";
	}
	else
	{
		for (j = 0; j < c; j++)
			cout << "1+";
	}
	c = a[2];
	if (a[3] == 0)
	{
		for (j = 0; j < c - 1; j++)
			cout << "2+";
		if (c > 0)
			cout << "2";
	}
	else
	{

		for (j = 0; j < c; j++)
			cout << "2+";
	}
	c = a[3];
	for (j = 0; j < c - 1; j++)
		cout << "3+";
	if (c > 0)
		cout << "3";
	return 0;
}