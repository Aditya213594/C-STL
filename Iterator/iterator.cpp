#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/input.txt", "r", stdin);
	freopen("C:/Users/Aditya/OneDrive/Desktop/sublime txt/output.txt", "w", stdout);
#endif

	vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		int d;
		cin >> d;

		v.push_back(d);
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}

	//using iterators
	//Iterators are like pointers which basically point towards the elements that are stored in the container. Containers like vectors, maps , sets can be hard to access without iterators. These are used to access the components or the content of the container. Iterators point towards the memory location of the elements of the container.

	//basic syntax
	//datatype name :: iterator iterator_name

	vector<int> :: iterator it;

	for (it = v.begin(); it != v.end(); it++)
	{
		//to access the elements use similar syntax as used in case of pointers.
		cout << *it << "\n";
	}

	//now this syntax is too long or not so good looking! , so we can use "auto" keyword. "auto" keyword automatically detects the datatype of the contained individual/element.

	auto i = 10;
	cout << typeid(i).name() << "\n"; // i->integer

	//also to further shorten our code we can use range based loops. Range based loops basically shorten our for loops.

	for (auto i : v)
	{
		cout << i << " ";
	}

}
