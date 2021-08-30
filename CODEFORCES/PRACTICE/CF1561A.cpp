#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> arr(n);

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		int res = 0;
		while (!is_sorted(arr.begin(), arr.end()))
		{
			for (int i = res % 2 ; i < n - 1; i += 2)
			{
				if (arr[i] > arr[i + 1])
					swap(arr[i], arr[i + 1]);
			}
			res++;
		}
		cout << res << "\n";
	}
	return 0;
}