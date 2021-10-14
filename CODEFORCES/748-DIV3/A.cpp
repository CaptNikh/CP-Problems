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
		int a, b, c;
		cin >> a >> b >> c;

		int maxAll = max(max(a, b), max(b, c));
		if (maxAll == 0)
			cout << "1" << " " << "1" << " " << "1\n";
		else if (maxAll == a && maxAll == b && maxAll == c)
			cout << "1" << " " << "1" << " " << "1" << "\n";
		else if (maxAll == a && maxAll == b && maxAll != c)
			cout << "1" << " " << "1" << " " << maxAll + 1 - c << "\n";
		else if (maxAll == a && maxAll != b && maxAll == c)
			cout << "1" << " " << maxAll + 1 - b << " " << "1" << "\n";
		else if (maxAll != a && maxAll == b && maxAll == c)
			cout << maxAll + 1 - a << " " << "1" << " " << "1" << "\n";
		else if (maxAll == a)
		{
			cout << "0" << " " << maxAll + 1 - b << " " << maxAll + 1 - c << "\n";
		}
		else if (maxAll == b)
			cout << maxAll + 1 - a << " " << "0" << " " << maxAll + 1 - c << "\n";
		else
			cout << maxAll + 1 - a << " " << maxAll + 1 - b << " " << "0" << "\n";
	}


	return 0;
}
