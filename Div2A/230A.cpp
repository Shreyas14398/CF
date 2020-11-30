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

	int s , n ;
	int x , y ;
	int res = 0 ;
	cin >> s >> n ;
	vector <pair<int , int > > a ;
	for ( int i = 0 ; i < n ; i++) {
		cin >> x >> y ;
		a.pb(mp(x, y));
	}
	sort(a.begin() , a.end() );

	for ( int i = 0 ; i < n ; i++) {
		if (s > a[i].fs) {
			s += a[i].sc ;
			res++;
		}
		else break ;
	}
	(n - res == 0 ) ? cout << "YES" : cout << "NO" ;
	return 0;
}