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
		int n;
		cin >> n;
		string s;
		cin >> s;

		if (is_sorted(all(s)))
			cout << "0" << "\n";
		else
		{
			cout << "1\n";
			vector <int> v;

			int low = 0, high = n - 1;

			while (low <= high)
			{
				if (s[low] == '1' and s[high] == '0')
				{
					v.push_back(low + 1);
					v.push_back(high + 1);
					low++;
					high--;
				}
				else if (s[low] == '0' and s[high] == '1')
				{
					low++;
					high--;
				}
				else if (s[low] == '1' and s[high] == '1') {
					high--;
				}
				else
					low++;

			}
			cout << v.size() << " ";
			sort(all(v));
			for (int i : v)
				cout << i << " ";
			cout << "\n";
		}



	}


	return 0;

}
