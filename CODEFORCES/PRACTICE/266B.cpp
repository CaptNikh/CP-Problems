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

    int n, t;
    string s;
    cin >> n >> t >> s;

    while (t--)
    {
        int arr[n] = {0};
        for (int i = 1; i < n; i += 2)
        {
            if (s[i] == 'G')
            {
                if (s[i - 1] == 'B' and arr[i - 1] == 0)
                {
                    swap(s[i], s[i - 1]);
                    arr[i] = 1;
                }
            }
            else if (s[i] == 'B' and arr[i] == 0)
            {
                if ( i < n - 1 && s[i + 1] == 'G')
                {
                    swap(s[i], s[i + 1]);
                    arr[i + 1] = 1;
                }

            }
        }
    }
    cout << s << "\n";

    return 0;
}


