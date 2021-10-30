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
		string s;
		cin >> s;
		int count1 = 0, count2 = 0;
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i - 1] == 'a' and s[i] == 'b')
				count1++;
			else if (s[i - 1] == 'b' and s[i] == 'a')
				count2++;
		}
		int n = s.size();
		if (count1 > count2)
		{
			if (s[0] == 'a' and s[1] == 'b' || s[0] == 'a' and s[1] == 'a')
				s[0] = 'b';
			else if (s[n - 2] == 'a' and s[n - 1] == 'b' || s[n - 2] == 'b' and s[n - 1] == 'b')
				s[n - 1] == 'a';
		}
		else if (count2 > count1)
		{
			if (s[0] == 'b' and s[1] == 'a' || s[0] == 'b' and s[1] == 'b')
				s[0] = 'a';
			else if (s[n - 2] == 'a' and s[n - 1] == 'a' || s[n - 2] == 'b' and s[n - 1] == 'a')
				s[n - 1] == 'b';

		}
		cout << s << "\n";
	}


	return 0;
}
