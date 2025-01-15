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
bool check(string s) {
	int l = 0, r = s.size() - 1;
	while (l <= r)
	{
		if (s[l] != s[r])
		{
			return false;
		}
		l++;
		r--;
	}
	return true;
}
bool cmp(pair<string, int> a, pair<string, int> b)
{
	if (a.first.length() != b.first.length())
	{
		return a.first.length() < b.first.length();
	}
	return a.second < b.second;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	getline(cin, s);
	stringstream ss(s);
	string temp;
	vector<pair<string, int>> v;
	set<string>se;
	int i = 0;
	while (ss >> temp)
	{
		if (check(temp) && se.find(temp) == se.end())
		{
			se.insert(temp);
			v.push_back({ temp,i });
		}
		i++;
	}
	stable_sort(v.begin(), v.end(), cmp);
	for (auto x : v)
	{
		cout << x.first << " ";
	}
}
