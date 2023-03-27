#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/input.txt", "r", stdin);
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/output.txt", "w", stdout);
#endif

	pair<int, string> p(2, "hello");
	pair<string, int> d = {"hello", 4};

	pair<int, char> p1;
	p1 = make_pair(11, 'a');

	pair<int, char> p2(10, 'b');

	if (p1 > p2)
	{
		cout << "yes" << "\n";
	}
	else
	{
		cout << "no" << "\n";
	}


	cout << p1.first << " " << p1.second << "\n";

	cout << d.first << " " << d.second << "\n";

	pair<int, pair<int, string>> p3;

	p3.first = 1;
	p3.second.first = 2;
	p3.second.second = 'a';

	pair<vector<int>, int> p4;

	for (int i = 0; i < 5; i++)
	{
		p4.first.push_back(i * 10);
	}

	p4.second = 1;

	for (int i = 0; i < 5; i++)
	{
		cout << p4.first[i] << " " << p4.second << "\n";
	}

	cout << p3.first << " " << p3.second.first << " " << p3.second.second;

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}
