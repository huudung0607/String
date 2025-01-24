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
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
string thugon(string s)
{
	map<int, int> mp;
	stringstream ss(s);
	string w;
	while (ss >> w)
	{
		if (w == "+")
		{
			continue;
		}
		auto pos = w.find("x^");
		int num = stoi(w.substr(0, pos));
		int somu = stoi(w.substr(pos + 2));
		mp[somu] += num;
	}
	ostringstream res; 
	bool find = true;
	for (auto x : mp)
	{
		if (x.second == 0)
		{
			continue;
		}
		if (!find)
		{
			res << " + ";
		}
		res << x.second << "x^" << x.first;
		find = false;
	}
	return res.str();
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		cout << thugon(s) << endl;
	}
}
