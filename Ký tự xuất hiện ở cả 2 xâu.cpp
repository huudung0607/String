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
	set<char>giao;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
	{
		mp[a[i]] = 1;
		giao.insert(a[i]);
	}
	for (int i = 0; i < b.size(); i++)
	{
		giao.insert(b[i]);
		if (mp[b[i]] == 1)
		{
			mp[b[i]] = 2;
		}
	}
	set<char> hop;
	for (int i = 0; i < a.size(); i++)
	{
		if (mp[a[i]] == 2)
		{
			hop.insert(a[i]);
		}
	}
	for (auto x : hop)
	{
		cout << x;
	}
	cout << endl;
	for (auto x : giao)
	{
		cout << x;
	}
}
