#include <bits/stdc++.h>
using namespace std;
#define int long long

vector <int> arr(10001);

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int j = 1;
	for (int i = 1; i < 100000 and j < 10001; i++)
	{
		if ((i % 3) != 0 and (i % 10) != 3)
		{
			arr[j] = i;
			j++;
		}

	}

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << arr[n] << "\n";

	}
	return 0;
}