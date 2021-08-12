#include <bits/stdc++.h>
using namespace std;
int chfgcd() {
    int x, y;
    cin >> x >> y;

    if (__gcd(x, y) > 1)
        return 0;
    else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1)
        return 1;
    else
        return 2;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cout << chfgcd() << "\n";
    }
    return 0;
}
