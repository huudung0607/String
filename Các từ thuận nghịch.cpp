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
bool check(string s)
{
	int i = 0, l = s.size() - 1;
	while (i <= l)
	{
		if (s[i] != s[l])
		{
			return false;
		}
		i++;
		l--;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while (ss >> tmp)
	{
		if (check(tmp))
		{
			v.push_back(tmp);
		}
	}
	sort(v.begin(), v.end());
	for (auto x : v)
	{
		cout << x << " ";
	}
}
