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
using namespace std;
vector<string> getString(string s) {
	vector<string> v;
	stringstream ss(s);
	string w;
	while (ss >> w)
	{
		v.push_back(w);
	}
	return v;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<string, int>mp;
	string s;
	while (getline(cin,s))
	{
		int index = s.find('-');
		string X = s.substr(0, index - 1);
		string Y = s.substr(index + 2);
		vector<string> v1 = getString(X), v2 = getString(Y);
		string team1 = "", team2 = "";
		for (int i = 0; i < v1.size() - 1; i++)
		{
			team1 += v1[i] + " ";
		}
		for (int i = 1; i < v2.size(); i++)
		{
			team2 += v2[i] + " ";
		}
		team1.pop_back();
		team2.pop_back();
		mp[team1] += stoi(v1[v1.size() - 1]);
		mp[team2] += stoi(v2[0]);
	}
	vector<pair<string, int>> v;
	for (auto x : mp)
	{
		v.push_back(x);
	}
	sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b) ->bool {
		if (a.second != b.second)
		{
			return a.second > b.second;
		}
		return a.first < b.first;
		});
	for (auto x : v)
	{
		cout << x.first << " " << x.second << endl;
	}
}
