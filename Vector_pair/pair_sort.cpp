#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/input.txt", "r", stdin);
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	pair<int, string> p[n];

	for (int i = 0; i < n; i++)
	{
		cin >> p[i].first >> p[i].second;
	}

	sort(p, p + n, greater <>());

	for (int i = 0; i < n; i++)
	{
		cout << p[i].second << " " << p[i].first << "\n";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}
