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
#define int long long

int fact(int n)
{
	return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

int arr[MAXN];

int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n, q;
		cin >> n >> q;

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		vii A(n + 1);

		if (arr[0] % 2 == 0)
			A[1].first = 1;
		else
			A[1].second = 1;

		for (int i = 2; i < n + 1; i++)
		{
			A[i] = A[i - 1];

			if (arr[i - 1] % 2 == 0)
				A[i].first++;
			else
				A[i].second++;
		}

		while (q--)
		{
			int l, r;
			cin >> l >> r;

			if ((r - l) + 1 < 3)
				cout << "0" << "\n";
			else
			{
				int eve = A[r].first - A[l - 1].first;
				int od = A[r].second - A[l - 1].second;
				int res = 0;
				if (eve >= 3)
				{
					res  += (eve * (eve - 1) * (eve - 2)) / 6;
				}

				if (od >= 2 and eve >= 1)
				{
					res += ((od * (od - 1)) / 2 ) * eve;
				}

				cout << res << "\n";
			}
		}

	}
	return 0;
}