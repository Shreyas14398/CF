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
	int i, j, k, l , m, f = 0;
	cin >> s;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i] == 'h')
		{
			for (j = i + 1; j < s.size(); j++)
			{
				if (s[j] == 'e')
				{
					for (k = j + 1; k < s.size(); k++)
					{
						if (s[k] == 'l')
						{
							for (l = k + 1; l < s.size(); l++)
							{
								if (s[l] == 'l')
								{
									for (m = l + 1; m < s.size(); m++)
									{
										if (s[m] == 'o')
										{
											f = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}