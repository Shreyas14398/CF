#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	int v[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	int l = sizeof(v) / sizeof(v[0]);
	int n, f = 0;
	cin >> n;
	if (binary_search(v, v + l, n))
	{
		cout << "YES" << endl;
		return 0;
	}
	else
	{
		for (int i = 0; i < l; i++)
		{
			//cout << l << endl;
			if (n % v[i] == 0)
			{
				//cout << i << endl;
				cout << "YES" << endl;
				return 0;
			}

		}
	}
	cout << "NO" << endl;
	return 0;
}