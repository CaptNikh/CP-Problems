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

		int n; cin >> n;
		unordered_set<int> s;
		vi arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i]; s.insert(arr[i] - i);
		}
		if (s.size() == 1)
			cout << n << "\n";
		else
			cout << "1" << "\n";

	}

	return 0;
}