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

		string s;
		cin >> s;

		long long res = s[n - 1] - '0';

		for (int i = n - 2; i >= 0; i--)
		{
			if (s[i] != '0')
			{
				res += 1;
				res += s[i] - '0';
			}
		}

		cout << res << "\n";
	}


	return 0;
}
