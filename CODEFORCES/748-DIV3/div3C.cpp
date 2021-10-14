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
		int n, k;
		cin >> n >> k;
		vi arr(k);
		for (int &i : arr)
			cin >> i;
		sort(arr.begin(), arr.end(), greater<int>());
		int cat = 0;
		int safe = 0;
		for (int i = 0; i < k; i++)
		{
			if (arr[i] > cat)
			{
				cat += n - arr[i];
				safe++;
			}
		}
		cout << safe << endl;
	}


	return 0;
}
