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
	vector<string> v;
	while (cin >> s)
	{
		v.push_back(s);
	}
	map<string, int> mp;
	for (auto x : v)
	{
		mp[x]++;
	}
	for (auto x : mp)
	{
		cout << x.first << " " << x.second << endl;
	}
}
