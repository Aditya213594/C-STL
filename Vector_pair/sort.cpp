#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/input.txt", "r", stdin);
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/output.txt", "w", stdout);
#endif

	int a[10];
	int j = 10;

	for (int i = 0; i < 10; i++)
	{
		a[i] = j--;
	}

	//sort function-> sort(pointer to first element, pointer to last element + 1)

	sort(a, a + 9); // pointer to last element

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	// 2 3 4 5 6 7 8 9 10 1 -> output here

	sort(a, a + 10); //pointer to last element + 1

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	// 1 2 3 4 5 6 7 8 9 10 -> output here

	//for vectors
	vector<int> v;

	v.push_back(10);
	v.push_back(9);
	v.push_back(8);

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << "\n";

	//for string
	string s = "zyxwv";
	sort(s.begin(), s.end());

	cout << s << "\n";

}