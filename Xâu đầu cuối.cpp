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
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	map<char, int> mp;
	vector<pair<char, int>> v;
	for (auto x : s)
	{
		mp[x]++;
	}
	for (auto x : mp)
	{
		v.push_back({ x.first, x.second });
	}
	long long cnt = 0;
	for (auto x : v)
	{
		cnt = cnt + 1ll * x.second * (x.second - 1) / 2;
		cnt += x.second;
	}
	cout << cnt;
}
