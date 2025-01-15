#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<char, int> mp;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
	{
		mp[a[i]] = 1;
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (mp[b[i]] == 1)
		{
			mp[b[i]] = 2;
		}
	}
	set<char> s1, s2;
	for (int i = 0; i < a.size(); i++)
	{
		if (mp[a[i]] != 2)
		{
			s1.insert(a[i]);
		}
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (mp[b[i]] != 2)
		{
			s2.insert(b[i]);
		}
	}
	for (auto x : s1)
	{
		cout << x;
	}
	cout << endl;
	for (auto x : s2)
	{
		cout << x;
	}
}
