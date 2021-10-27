#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

#define INF INT_MAX
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define MAXN 1000000
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define int long long

int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int n , v;
		cin >> n >> v;


		int maxp = 0, minp = 1 * v;
		maxp = (n * (n - 1)) / 2;
		if (v >= n - 1)
			minp = 1 * n - 1;
		else {
			minp += ((2 + (n - v)) * (n - v - 1)) / 2;
		}
		cout << maxp << " " << minp << "\n";


	}


	return 0;
}
