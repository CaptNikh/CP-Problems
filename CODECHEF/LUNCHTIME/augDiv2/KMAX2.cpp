#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int arr[n];
		int maxx = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			maxx = max(arr[i], maxx);
		}
		int res = 0;
		for (int i = 0; i <= n - k; i++)
		{
			if (arr[i + k - 1] == maxx)
			{
				res += n - (i + k - 1);
			}
		}
		cout << res << "\n";

	}
	return 0;
}
