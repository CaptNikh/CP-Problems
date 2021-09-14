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
        int n, k;
        cin >> n >> k;
        ll arr[n];
        for (auto &i : arr)
            cin >> i;
        unordered_map <ll , ll > m;
        pair<ll, ll> a;
        a = MP(-1, INT_MAX);
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
            a.F = max(m[arr[i]], a.F);
        }
        if (k == 0)
        {
            cout << a.F << " " << "0" << "\n";
        }
        else
        {
            for (auto it = m.begin(); it != m.end(); it++)
            {
                auto x  = m.find(it->F ^ k);

                if ( x != m.end())
                {
                    if (it->S + x->S > a.F)
                    {
                        a.F = max(a.F, it->S + x->S);
                        a.S = it->S;
                    }
                    else if (it->S + x->S == a.F)
                    {
                        a.S = min(it->S, a.S);
                    }
                }

                if (it->S > a.F)
                {
                    a.F = it->S;
                    a.S = 0;
                }
                else if (it->S == a.F)
                {
                    a.S = 0;
                }
            }

            cout << a.F << " " << a.S << "\n";
        }


    }
    return 0;
}
