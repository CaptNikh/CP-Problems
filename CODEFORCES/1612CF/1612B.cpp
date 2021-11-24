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

#define int long long

int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;

		vector<int> arr(n);

		for (int &i : arr)
			cin >> i;

		bool ans = false;

		unordered_set<int> s;


		int low = 0, high = n - 1;

		while (low < high)
		{
			if (arr[low] == arr[high])
			{
				low++;
				high--;
			}
			else if (s.empty() == true)
			{
				s.insert(arr[low]);
				low++;
			}
			else if (s.find(arr[low]) != s.end())
				low++;
			else if (s.find(arr[high]) != s.end())
				high--;
			else
				break;
		}

		if (low >= high) {
			ans = true;
			cout << "YES" << "\n";
		}

		if (ans == false) {
			s.clear();
			low = 0, high = n - 1;
			while (low < high)
			{
				if (arr[low] == arr[high])
				{
					low++;
					high--;
				}
				else if (s.empty())
				{
					s.insert(arr[high]);
					high--;
				}
				else if (s.find(arr[low]) != s.end())
					low++;
				else if (s.find(arr[high]) != s.end())
					high--;
				else
					break;
			}
			if (low >= high) {
				ans = true;
				cout << "YES" << "\n";
			}

		}

		if (ans == false)
			cout << "NO" << "\n";
	}


	return 0;
}
