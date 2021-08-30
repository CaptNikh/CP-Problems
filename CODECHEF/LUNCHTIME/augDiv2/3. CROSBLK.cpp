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
		int n;
		cin >> n;
		int arr[n];
		int maxx = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			maxx = max(arr[i], maxx);
		}

		if (maxx != arr[0])
		{
			cout << "-1" << "\n";
		}
		else {
			int jumps = 1;
			int curr_leadr = arr[n - 1];
			for (int i = n - 2; i > 0; i--)
			{
				if (curr_leadr < arr[i])
				{
					curr_leadr = arr[i];
					jumps++;
				}
			}
			cout << jumps << "\n";
		}

	}
	return 0;
}
