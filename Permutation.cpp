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
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	string t;
	cin >> s >> t;
	map<char, int> mp;
	for (auto x : s)
	{
		mp[x] = 1;
	}
	int cnt = 0;
	for (auto x : t)
	{
		if (mp[x] == 1)
		{
			cnt++;
		}
	}
	if (cnt == s.length())
	{
		cout << "28tech";
	}
	else
	{
		cout << "29tech";
	}
}
