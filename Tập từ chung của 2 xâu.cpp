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
string mail = "@xyz.edu.vn";
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string t;
	getline(cin, t);
	string s;
	getline(cin, s);
	for (char& x : t)
	{
		x = tolower(x);
	}
	for (char& x : s)
	{
		x = tolower(x);
	}
	stringstream ss1(t), ss2(s);
	string temp1, temp2;
	set<string> s1, s2;
	while (ss1 >> temp1)
	{
		s1.insert(temp1);
	}
	while (ss2>>temp2)
	{
		s2.insert(temp2);
	}
	map<string, int> mp;
	for (auto x : s1)
	{
		mp[x] = 1;
	}
	for (auto x : s2)
	{
		if (mp[x] == 1)
		{
			mp[x] = 2;
		}
	}
	for (auto x : s1)
	{
		if (mp[x] == 2)
		{
			cout << x << " ";
			mp[x] = 0;
		}
	}
}
