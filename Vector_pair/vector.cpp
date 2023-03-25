#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/input.txt", "r", stdin);
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/output.txt", "w", stdout);
#endif

	vector<int> v;// vector declaration

	for (int i = 0; i < 10; i++)
	{
		int d;
		cin >> d;

		v.push_back(d); // vector insertion
	}

	// size of vector -> v.size();
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " "; // vector printing
	}
	cout << "\n";

	//for clearing the vector -> v.clear();

	//for declaring vector with specific size -> vector<int> v(50);
	// for declaring vector with specific size and some initial value -> vector<int> v(50, 10);

	vector<int> v1(5);
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " "; //  here initially 0 is stored in the vector
	}
	cout << "\n";

	vector<int> v2(5, 1);
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " "; //  here initially 1 is stored in the vector
	}
	cout << "\n";

	//Enough understanding lets try a problem
	//Given n numbers in input you have to print even numbers in 1 line in sorted order and similarly odd numbers in the next line in the sorted order in the next line.

	//solution
	//basic apporach -> take two vectors. in one store even numbers and then sort and in another store odd numbers and then sort it. we cannot use array since we do not know what is the number of odd and even numbers so we cannot predefine the size of the array. if we want to use array we have to first find the number of odd and even numbers which would be more tough than this approach.

	vector<int> even;
	vector<int> odd;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int d;
		cin >> d;

		if (d % 2 == 0)
		{
			even.push_back(d);
		}
		else
		{
			odd.push_back(d);
		}
	}

	sort(even.begin(), even.end()); // c++ stl function for sorting wolud be explained in next file.
	sort(odd.begin(), odd.end());

	for (int i = 0; i < even.size(); i++)
	{
		cout << even[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < odd.size(); i++)
	{
		cout << odd[i] << " ";
	}
}