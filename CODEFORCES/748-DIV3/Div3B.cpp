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
		string s;
		cin >> s;

		int n = s.size();

		int dig1 = -1;
		int dig2 = -1;
		int res1 = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			if (dig1 == -1)
			{
				if (s[i] == '0')
				{
					dig1 = 0;
				}
				else
					res1++;
			}
			else if (dig1 == 0)
			{
				if (s[i] == '0' or s[i] == '5')
					break;
				else
					res1++;
			}
		}
		int res2 = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			if (dig2 == -1)
			{
				if (s[i] == '5')
				{
					dig2 = 5;
				}
				else
					res2++;
			}
			else if (dig2 == 5)
			{
				if (s[i] == '2' or s[i] == '7')
					break;
				else
					res2++;
			}
		}
		cout << min(res1, res2) << "\n";
	}


	return 0;
}
