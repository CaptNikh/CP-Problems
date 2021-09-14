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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;

		int oddc = 0, evenc = 0;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;

			if (x % 2 == 0)
				evenc++;
			else
				oddc++;
		}

		int evei = n / 2, oddi = n - n / 2;

		int res = min(evenc, oddi) + min(oddc, evei);
		cout << res << "\n";
	}

	return 0;
}
