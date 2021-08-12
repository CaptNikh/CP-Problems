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

        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (m[x] < x - 1)
                m[x]++;
        }
        int count = 0;
        for (auto &pr : m)
        {
            count = count + pr.second;
        }
        cout << count << endl;
    }
    return 0;
}
