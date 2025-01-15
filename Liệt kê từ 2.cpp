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
	string s;
	set<string>se;
	vector<string> v;
	while (cin >> s)
	{
		se.insert(s);
		v.push_back(s);
	}
	for (auto x : se)
	{
		cout << x << " ";
	}
	cout << endl;
	map<string, int> mp;
	for (auto x : v)
	{
		mp[x] = 1;
	}
	for (auto x : v)
	{
		if (mp[x] != 0)
		{
			cout << x << " ";
			mp[x] = 0;
		}
	}
}
