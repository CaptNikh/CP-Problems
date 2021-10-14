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
		int n;
		cin >> n;

		vector<int> arr(n);
		set<int> s;

		for (int &i : arr) {
			cin >> i;
			s.insert(i);
		}

		if (s.size() == 1)
			cout << "-1" << "\n";
		else
		{
			sort(arr.begin(), arr.end());
			int x = 0;
			for (int i = 1; i < n; i++)
			{
				x = __gcd(arr[i] - arr[i - 1], x);
			}
			cout << x << "\n";
		}


	}


	return 0;
}
