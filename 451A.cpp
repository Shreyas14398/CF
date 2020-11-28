#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int a, b;
	cin >> a >> b;
	if (min(a, b) % 2 == 0)
		cout << "Malvika" << endl;
	else
		cout << "Akshat" << endl;
	return 0;

}