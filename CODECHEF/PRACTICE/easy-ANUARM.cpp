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
	while (T--)
	{
		int N, M; cin >> N >> M;
		vi arr(N);
		int minPos = INF, maxPos = 0;
		while (M--)
		{
			int pos; cin >> pos;
			minPos = min(pos, minPos);
			maxPos = max(pos, maxPos);
		}

		for (int i = 0; i < N; i++)
		{
			arr[i] = max(abs(minPos - i), abs(maxPos - i));
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}