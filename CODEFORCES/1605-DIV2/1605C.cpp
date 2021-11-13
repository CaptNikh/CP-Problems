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
		int i;
		bool a3 = false;
		if (n == 3)
		{
			if (s[0] == 'a' and s[2] == 'a')
				cout << "3" << "\n";
		}
		else {
			for (i = 1; i < s.size(); i++) {
				if (s[i - 1] == 'a' and s[i] == 'a') {
					cout << "2" << "\n";
					break;
				}
				if ((s[i - 1] == 'a') and (i < n - 2 and s[i + 1] == 'a')) {
					a3 = true;
				}
			}
			if ( i == n) {
				if (a3)
					cout << "3" << "\n";
				else
					cout << "-1" << "\n";
			}
		}
	}


	return 0;
}
