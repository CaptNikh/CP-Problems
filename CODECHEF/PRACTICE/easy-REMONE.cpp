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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;

		unordered_set<int> s;

		// vi A(N); for (auto &i : A) cin >> i, s.insert(i);
		// vi B(N - 1); for (auto &i : B) cin >> i;
		vi arr1(n);
		for (auto &i : arr1)
		{
			cin >> i;
			s.insert(i);
		}
		vi arr2(n - 1);
		for (auto &i : arr2)
		{
			cin >> i;
		}

		sort(all(arr1)); sort(all(arr2));

		int ans = arr2[0] - arr1[1];

		for (auto &i : arr2)
		{
			if (s.count(i - ans) == 0)
			{
				ans = arr2[0] - arr1[0];
				break;
			}
		}
		if (ans <= 0) ans = arr2[0] - arr1[0];
		cout << ans << "\n";
	}

	return 0;
}
