#include <bits/stdc++.h>
using namespace std;
#define int long long

vector <int> arr(10001);

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {

		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + n);
		int sum = 0;
		int j = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < 0 and j < k)
			{
				j++;
				arr[i] = (-1) * arr[i];
			}

			if (arr[i] >= 0)
				sum += arr[i];
		}
		cout << sum << "\n";
	}
	return 0;
}
