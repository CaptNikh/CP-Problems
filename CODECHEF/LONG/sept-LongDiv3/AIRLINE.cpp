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

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
	return (a.second < b.second);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		if (a + b <= d and c <= e)
		{
			cout << "YES" << "\n";
		}
		else if (a + c <= d and b <= e)
		{
			cout << "YES" << "\n";
		}
		else if (b + c <= d and a <= e)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}

	return 0;
}
