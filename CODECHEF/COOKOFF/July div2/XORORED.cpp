#include <bits/stdc++.h>
using namespace std;

void minxor()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// to find the value of X we can either perform OR to all elements or AND.
	int AND = -1; //sets all bits to 1;
	for (int i = 0; i < n; i++)
	{
		AND = AND & arr[i];
	}
	// to find the minimum

	int min = 0;
	for (int i = 0; i < n; i++)
	{
		min |= arr[i] ^ AND;
	}
	cout << AND << " " << min << "\n";

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		minxor();
	}
	return 0;
}
