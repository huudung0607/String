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
	map<string, int> mp;
	vector<string> v;
	while (cin >> s)
	{
		mp[s]++;
		v.push_back(s);
	}
	for (auto x : mp)
	{
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for (auto x : v)
	{
		if (mp[x] != 0)
		{
			cout << x << " " << mp[x] << endl;
			mp[x] = 0;
		}
	}
}
