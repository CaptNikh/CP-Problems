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
		int n, k;
		cin >> n >> k;


		int time = 0;
		if (n <= k)
		{
			int i = 1;
			int j = 2;
			while (i < n)
			{
				i = i * j;
				time++;
			}
			cout << time << "\n";
		}
		else {
			int comp = 1;
			int i = 2;
			while (comp < k)
			{
				comp = comp * i;
				time++;
			}

			if (comp >= n)
				cout << time << "\n";
			else if (comp + k < n)
			{
				if ((n - comp) % k != 0)
					time++;

				time += (n - comp) / k;
				cout << time << "\n";
			}
			else
				cout << time + 1 << "\n";
		}


	}


	return 0;
}
