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
		string s;
		cin >> s;
		int n = s.size();
		if ((s[n - 1] - '0') % 2 == 0)
			cout << "0\n";
		else if ((s[0] - '0') % 2 == 0)
			cout << "1\n";
		else {
			bool ans = false;
			for (int i = 0; i < n; i++)
			{
				if ((s[i] - '0') % 2 == 0)
				{
					ans = true;
					break;
				}
			}

			if (ans == true)
				cout << "2" << "\n";
			else
				cout << "-1\n";
		}
	}


	return 0;
}
